#include "player.h"

#include <iostream>

#include "scoreCalculator.h"

Player::Player(std::string playerName)
    : go_(0), stop_(0), score_(0),playerName_(playerName) {}
// �տ� �ִ� n��° �� ����
Card* Player::handOut() {
  if (this->handField()
          ->empty()) {  // �� �а� ���� �� nullptr�� ��ȯ�Ͽ� �����⸸
    std::cout << "�� �а� ��� �����Ǿ����ϴ�. �и� ����������. " << std::endl;
    return nullptr;
  }
  int nthCard;
  std::cout << "�� �� ī�带 ���� ����ּ��� : ";
  std::cin >> nthCard;
  // ���� ���� �� �Է½� ���Է� ��û
  while ((nthCard > this->handField()->size() - 1) || (nthCard < 0)) {
    std::cout << "�߸��� �� �Դϴ�. �� �� ī�带 ���� �ٽ� ����ּ��� : ";
    std::cin >> nthCard;
  }

  std::vector<Card*>::iterator iter = handField()->begin();
  iter += nthCard;
  Card* outCard = this->handField()->at(nthCard);
  this->handField()->erase(iter);
  return outCard;
}

// ī�带 �� ī��迭�� �߰�
void Player::addScoreField(Card* newCard) {
  this->scoreField()->push_back(newCard);
}

// ���濡�� �� ���� �ֱ�
bool Player::giveCard(Player* other) {
  std::vector<Card*>::iterator iter;
  Card* outCard = nullptr;
  Card* ssangP = nullptr;
  for (iter = scoreField()->begin(); iter != scoreField()->end(); iter++) {
    if ((*iter)->cardType() == 4) {  // scoreField���� �� ã��
      outCard = *iter;
      this->scoreField()->erase(iter);
      other->addScoreField(outCard);
      std::cout << this->playerName() << "��(��) " << other->playerName()
                << "���� " << outCard->isName() << "�� ������ϴ�."
                << std::endl;
      return true;
    }
  }
  std::cout << this->playerName() << "��(��) �� �ǰ� �����ϴ�. " << std::endl;
  return false;  // �� �ǰ� ������ false ��ȯ
}
void Player::goStop() {
  int sco = this->myScore();
  std::cout << this->playerName() << " : " << sco <<"�� , " <<this->go()<<"��"<< std::endl;
  if ((sco < 3) ||
      !(this->score() <
        sco)) {  // 3 �����ϰų� ���� ������ �� ������ ������ ������
    return;  // ����
  } else {
    this->setScore(sco);
    int choice;
    std::cout << " ������ �����մϴ�! 0�� 1�� �Է����ּ���." << std::endl;
    std::cout << " ��  ( 0 )   ���� ( 1 ) " << std::endl;
    std::cin >> choice;
    while (choice < 0 || choice > 1) {
      std::cout << "! �� ( 0 ) ���� ( 1 ) �߿� �������ּ���. " << std::endl;
      std::cin >> choice;
    }
    if (choice == 1) {
      this->setStop(true);
      std::cout << this->playerName() << "��(��) �����Ͽ����ϴ� !" << std::endl;
    } else {
      this->setGo(this->go() + 1);
      std::cout << this->playerName() << " " << this->go() << " �� !"
                << std::endl;
    }
  }
  return;
}
// �� ���� ��ȯ
int Player::myScore() {
  scoreCalculator scoreC = scoreCalculator::scoreCalculator();
  int score = scoreC.score(*Player::scoreField());
  return score;
}

// �� �� ���
void Player::printMyScoreField() {
  if (this->scoreField()->empty()) {
    return;
  }
  std::cout << "[ " << this->playerName() << " ���� ���� �� ]" << std::endl;
  int size = this->scoreField()->size();
  std::cout << "�� : ";
  for (int i = 0; i < size; i++) {
    if (this->scoreField()->at(i)->cardType() == 1)
      std::cout << this->scoreField()->at(i)->isName() << " ";
  }
  std::cout<<std::endl << "���� : ";
  for (int i = 0; i < size; i++) {
    if (this->scoreField()->at(i)->cardType() == 2)
      std::cout << this->scoreField()->at(i)->isName() << " ";
  }
  std::cout << std::endl << "�� : ";
  for (int i = 0; i < size; i++) {
    if (this->scoreField()->at(i)->cardType() == 3)
      std::cout << this->scoreField()->at(i)->isName() << " ";
  }
  std::cout << std::endl << "�� : ";
  for (int i = 0; i < size; i++) {
    if (this->scoreField()->at(i)->cardType() == 4)
      std::cout << this->scoreField()->at(i)->isName() << " ";
  }
  std::cout << std::endl;
}

  // �� �� �� ���
void Player::printMyHandField() {
  if (this->handField()->empty()) {
    return;
  }
  std::cout << "[ " << this->playerName() << " ���� �� ]" << std::endl;
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

// �� go Ƚ�� ��ȯ
int Player::score() { return this->score_; }

// �� go Ƚ�� ����
void Player::setScore(int newscore) { this->score_ = newscore; }

// �� stop ���� ��ȯ
bool Player::stop() { return this->stop_; }

// �� stop ���� ����
void Player::setStop(bool stop) { this->stop_ = stop; }