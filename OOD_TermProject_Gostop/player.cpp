#include "player.h"

#include <iostream>

#include "scoreCalculator.h"

scoreCalculator scoreC = scoreCalculator::scoreCalculator();  // ScoreCalculator 객체 생성

ScoreField::ScoreField() : blue_ribbon(0), red_ribbon(0), cho_ribbon(0), godori(0){}

Player::Player(std::string playerName)
    : playerName_(playerName), go_(0), stop_(0), score_(0), shake_(0) {
  scoreField_ = ScoreField::ScoreField();
}
bool Player::shakable() {}
    // 손에 있는 n번째 패 내기
Card* Player::handOut() {
  if (this->handField()->empty()) {  // 손 패가 없을 때 nullptr을 반환하여 뒤집기만
    std::cout << "손 패가 모두 소진되었습니다. 패를 뒤집으세요. " << std::endl;
    return nullptr;
  }
  int nthCard;
  std::cout << "몇 번 카드를 낼지 골라주세요 : ";
  std::cin >> nthCard;
  // 범위 밖의 수 입력시 재입력 요청
  while ((nthCard > this->handField()->size() - 1) || (nthCard < 0)) {
    std::cout << "잘못된 수 입니다. 몇 번 카드를 낼지 다시 골라주세요 : ";
    std::cin >> nthCard;
  }

  std::vector<Card*>::iterator iter = handField()->begin();
  iter += nthCard;
  Card* outCard = this->handField()->at(nthCard);
  this->handField()->erase(iter);
  return outCard;
}

// 카드를 딴 카드배열에 추가
void Player::addScoreField(Card* newCard) {
  int cardType = newCard->cardType();
  switch (cardType) {
    case 1:   // 광
      this->scoreField()->myGwang.push_back(newCard);
      break;
    case 2:   // 열끗
      this->scoreField()->myYeol.push_back(newCard);
      if (newCard->isGodori()) this->scoreField()->godori++;
      break;
    case 3:   // 단
      this->scoreField()->myRibbon.push_back(newCard);
      if (newCard->specialRibbon() == 1) {          // 홍단이면 red_ribbon++
        this->scoreField()->red_ribbon++;
      }
      else if (newCard->specialRibbon() == 2) {   // 청단이면 blue_ribbon++
        this->scoreField()->blue_ribbon++;
      }
      else if (newCard->specialRibbon() == 3) {   // 초단이면 cho_ribbon++
        this->scoreField()->cho_ribbon++;
      }
      break;
    case 4:   // 피
      if (newCard->isSsangP()) {  // 쌍피
        this->scoreField()->mySsangP.push_back(newCard);
      }
      else {  // 그냥 피
        this->scoreField()->myP.push_back(newCard);
      }
      break;
    default:
      std::cout << "error" << std::endl;
      break;
  }
}

// 상대방에게 피 한장 주기
bool Player::giveCard(Player* other) {
  size_t myPSize = this->scoreField()->myP.size();
  size_t mySsangPSize = this->scoreField()->mySsangP.size();
  Card* losingCard;

  if (myPSize > 0) {  // 피 있으면 피 주기
    losingCard = this->scoreField()->myP.back();
    this->scoreField()->myP.pop_back();
    other->scoreField()->myP.push_back(losingCard);
  }
  else if (mySsangPSize > 0) {  // 쌍피 있으면 쌍피 주기
    losingCard = this->scoreField()->mySsangP.back();
    this->scoreField()->mySsangP.pop_back();
    other->scoreField()->mySsangP.push_back(losingCard);
  } 
  else {    // 아무것도 없으면 false 반환
    std::cout << this->playerName() << "은(는) 줄 피가 없습니다. " << std::endl;
    return false;
  }

  // 뺏겼다는 문구 출력 후 true 반환
  std::cout << this->playerName() << "은(는) " << other->playerName() << "에게 "
            << losingCard->isName() << "를 뺏겼습니다." << std::endl;
  return true;
}

void Player::goStop() {
  int sco = this->myScore();
  if ((sco < 3) || !(this->score() < sco)) {  // 3 점이하거나 턴을 돌았을 때 점수가 오르지 않으면
    return;  // 종료
  } else {
    this->setScore(sco);
    int choice;
    std::cout << " 고스톱이 가능합니다! 0과 1을 입력해주세요." << std::endl;
    std::cout << " 고  ( 0 )   스톱 ( 1 ) " << std::endl;
    std::cin >> choice;
    while (choice < 0 || choice > 1) {
      std::cout << "! 고 ( 0 ) 스톱 ( 1 ) 중에 선택해주세요. " << std::endl;
      std::cin >> choice;
    }
    if (choice == 1) {
      this->setStop(true);
      std::cout << this->playerName() << "은(는) 스톱하였습니다 !" << std::endl;
    } else {
      this->setGo(this->go() + 1);
      std::cout << this->playerName() << " " << this->go() << " 고 !" << std::endl;
    }
  }
  return;
}
// 내 점수 반환
int Player::myScore() {
  int score = scoreC.score(Player::scoreField(), this->go(), this->shake());
  return score;
}

// 딴 패 출력
void Player::printMyScoreField() {
  std::cout << "[ " << this->playerName() << " 님이 먹은 패 ]" ;
  size_t size = this->scoreField()->myGwang.size();
  if (size > 0) {
    std::cout <<std::endl<< "광 : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myGwang.at(i)->isName() << " ";
    }
  }
  size = this->scoreField()->myYeol.size();
  if (size > 0) {
    std::cout << std::endl << "열끗 : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myYeol.at(i)->isName() << " ";
    }
  }
  size = this->scoreField()->myRibbon.size();
  if (size > 0) {
    std::cout << std::endl << "단 : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myRibbon.at(i)->isName() << " ";
    }
  }
  size = this->scoreField()->mySsangP.size() +
         this->scoreField()->myP.size();  // 쌍피 + 피 개수
  if (size > 0) {
    size = this->scoreField()->mySsangP.size();
    std::cout << std::endl << "피 : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->mySsangP.at(i)->isName() << " ";
    }
    size = this->scoreField()->myP.size();  // 그냥 피
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myP.at(i)->isName() << " ";
    }
  }

  
  std::cout << std::endl;
}

  // 내 손 패 출력
void Player::printMyHandField() {
  if (this->handField()->empty()) {
    return;
  }
  std::cout << "[ " << this->playerName() << " 님의 패 ]" << std::endl;
  size_t size = this->handField()->size();
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

// 내가 이겼을때 박을 적용한 상대적 점수
int Player::myScoreByLoser(Player* other) {
  return scoreC.calcBak(this, other); 
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

// 내가 얻은 패 반환
ScoreField* Player::scoreField() { return &this->scoreField_; }

// 내 go 횟수 반환 vector 반환
int Player::go() { return this->go_; }

// 내 go 횟수 설정
void Player::setGo(int goCount) { this->go_ = goCount; }

// 내 go 횟수 반환
int Player::score() { return this->score_; }

// 내 go 횟수 설정
void Player::setScore(int newscore) { this->score_ = newscore; }

// 내 stop 여부 반환
bool Player::stop() { return this->stop_; }

// 내 stop 여부 설정
void Player::setStop(bool stop) { this->stop_ = stop; }

// 흔들기 횟수 반환
int Player::shake() { return this->shake_; }