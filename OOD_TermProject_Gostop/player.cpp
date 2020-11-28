
#include "player.h"

#include <iostream>

#include "scoreCalculator.h"

Player::Player(std::string playerName) : go_(0), stop_(0), playerName_(playerName) {}
// �տ� �ִ� n��° �� ����
Card* Player::handOut(int n) {
  std::vector<Card*>::iterator iter = handField()->begin();
  iter += n;
  Card* outCard = this->handField()->at(n);
  this->handField()->erase(iter);
  return outCard;
}

// ī�带 �� ī��迭�� �߰�
void Player::addScoreField(Card* newCard) {
  this->scoreField()->push_back(newCard);
}

// ���濡�� �� ���� �ֱ�
bool Player::giveCard(Player* other, Card* looseCard) {
  std::vector<Card*>::iterator iter;
  Card* outCard = nullptr;
  Card* ssangP = nullptr;
  for (iter = scoreField()->end(); iter > scoreField()->begin(); iter--) {
    if ((*iter)->cardType() == 4) {   // scoreField���� �� ã��
      outCard = *iter;
      this->scoreField()->erase(iter);
      other->addScoreField(outCard);
      return true;
    }
  }
  return false; // �� �ǰ� ������ false ��ȯ
}

// �� ���� ��ȯ
int Player::myScore() {
  scoreCalculator scoreC = scoreCalculator::scoreCalculator();
  int score = scoreC.score(*Player::scoreField());
  return score;
}

// �� �� �� ���
void Player::printMyHandField() {
  std::cout << "[ "<<this->playerName() <<" ���� �� ]" << std::endl;
  int size = this->handField()->size();
  for (int i = 0; i < size; i++) {
    std::cout << "  -------------";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  |     " << i << "     |";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  |-----------|";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  |";
    std::cout.width(10);
    std::cout << this->handField()->at(i)->isName() << " |";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  -------------";
  }
  std::cout << std::endl;
}

// Getters & Setters
// �÷��̾� �̸� ��ȯ
std::string Player::playerName() { return this->playerName_; }

// �� �� ��ȯ
std::vector<Card*>* Player::handField() { return &this->handField_; }

// ó�� �����Ҷ� �� �� ���
void Player::setHandField(Card* newCard) {
  this->handField()->push_back(newCard);
}

// ���ݱ��� �� ī�� ��ȯ
std::vector<Card*>* Player::scoreField() { return &this->scoreField_; }

// �� go Ƚ�� ��ȯ
int Player::go() { return this->go_; }

// �� go Ƚ�� ����
void Player::setGo(int goCount) { this->go_ = goCount; }

// �� stop ���� ��ȯ
bool Player::stop() { return this->stop_; }

// �� stop ���� ����
void Player::setStop(bool stop) { this->stop_ = stop; }
