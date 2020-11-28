
#include "player.h"

#include <iostream>

#include "scoreCalculator.h"

Player::Player(std::string playerName) : go_(0), stop_(0), playerName_(playerName) {}
// 손에 있는 n번째 패 내기
Card* Player::handOut(int n) {
  std::vector<Card*>::iterator iter = handField()->begin();
  iter += n;
  Card* outCard = this->handField()->at(n);
  this->handField()->erase(iter);
  return outCard;
}

// 카드를 딴 카드배열에 추가
void Player::addScoreField(Card* newCard) {
  this->scoreField()->push_back(newCard);
}

// 상대방에게 피 한장 주기
bool Player::giveCard(Player* other, Card* looseCard) {
  std::vector<Card*>::iterator iter;
  Card* outCard = nullptr;
  Card* ssangP = nullptr;
  for (iter = scoreField()->end(); iter > scoreField()->begin(); iter--) {
    if ((*iter)->cardType() == 4) {   // scoreField에서 피 찾기
      outCard = *iter;
      this->scoreField()->erase(iter);
      other->addScoreField(outCard);
      return true;
    }
  }
  return false; // 줄 피가 없으면 false 반환
}

// 내 점수 반환
int Player::myScore() {
  scoreCalculator scoreC = scoreCalculator::scoreCalculator();
  int score = scoreC.score(*Player::scoreField());
  return score;
}

// 내 손 패 출력
void Player::printMyHandField() {
  std::cout << "[ "<<this->playerName() <<" 님의 패 ]" << std::endl;
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
// 플레이어 이름 반환
std::string Player::playerName() { return this->playerName_; }

// 손 패 반환
std::vector<Card*>* Player::handField() { return &this->handField_; }

// 처음 시작할때 손 패 얻기
void Player::setHandField(Card* newCard) {
  this->handField()->push_back(newCard);
}

// 지금까지 딴 카드 반환
std::vector<Card*>* Player::scoreField() { return &this->scoreField_; }

// 내 go 횟수 반환
int Player::go() { return this->go_; }

// 내 go 횟수 설정
void Player::setGo(int goCount) { this->go_ = goCount; }

// 내 stop 여부 반환
bool Player::stop() { return this->stop_; }

// 내 stop 여부 설정
void Player::setStop(bool stop) { this->stop_ = stop; }
