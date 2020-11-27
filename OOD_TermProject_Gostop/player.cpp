
#include"player.h"
#include "scoreCalculator.h"
#include<iostream>

  Player::Player()
    : go_(0),
      stop_(0),
      handField_(*new std::vector<Card*>),
      scoreField_(*new std::vector<Card*>) {}
  // 손에 있는 n번째 패 내기
  Card* Player::handOut(int n){
    std::vector<Card*>::iterator iter = handField().begin();
    iter += n;
    Card* outCard = this->handField().at(n);
    this->handField().erase(iter);
    return outCard;
  }
  
  // 카드를 딴 카드배열에 추가
  void Player::addScoreField(Card* newCard) { 
    this->scoreField()->push_back(newCard);
  }
  
  // 상대방에게 피 한장 주기
  Card* Player::giveCard(Card* looseCard) { 
    std::vector<Card*>::iterator iter;
    int n = handField().size()-1;
    Card* outCard = nullptr;
    for (iter = handField().end(); iter > handField().begin(); iter--) {
      if(handField().at(n)->isBgwang() || handField().at(n)->isGodori() ||
             handField().at(n)->isBgwang()) {
        n--;
      } else {
        outCard = this->handField().at(n);
        this->scoreField()->erase(iter);
      }

    }
    return outCard;
  }


  // 내 점수 반환
  int Player::myScore() { 
    scoreCalculator scoreC = scoreCalculator::scoreCalculator();
    int score = scoreC.score(*Player::scoreField());
    return score;
  }
  

  // Getters & Setters
  // 손 패 반환
  std::vector<Card*> Player::handField() { return this->handField_; }

  // 처음 시작할때 손 패 얻기
  void Player::setHandField(std::vector<Card*> newCard) { this->handField_ = newCard; }

  // 지금까지 딴 카드 반환
  std::vector<Card*>* Player::scoreField() { return &this->scoreField_;  }

  // 내 go 횟수 반환
  int Player::go() { return this->go_; }                 

  // 내 go 횟수 설정
  void Player::setGo(int goCount) { this->go_ = goCount; }  

  // 내 stop 여부 반환
  bool Player::stop() { return this->stop_; }

   // 내 stop 여부 설정
  void Player::setStop(bool stop) { this->stop_ = stop; }
  