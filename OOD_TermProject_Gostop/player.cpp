
#include"player.h"
#include "scoreCalculator.h"
#include<iostream>

  Player::Player()
    : go_(0),
      stop_(0),
      handField_(*new std::vector<Card*>),
      scoreField_(*new std::vector<Card*>) {}
  // �տ� �ִ� n��° �� ����
  Card* Player::handOut(int n){
    std::vector<Card*>::iterator iter = handField().begin();
    iter += n;
    Card* outCard = this->handField().at(n);
    this->handField().erase(iter);
    return outCard;
  }
  
  // ī�带 �� ī��迭�� �߰�
  void Player::addScoreField(Card* newCard) { 
    this->scoreField()->push_back(newCard);
  }
  
  // ���濡�� �� ���� �ֱ�
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


  // �� ���� ��ȯ
  int Player::myScore() { 
    scoreCalculator scoreC = scoreCalculator::scoreCalculator();
    int score = scoreC.score(*Player::scoreField());
    return score;
  }
  

  // Getters & Setters
  // �� �� ��ȯ
  std::vector<Card*> Player::handField() { return this->handField_; }

  // ó�� �����Ҷ� �� �� ���
  void Player::setHandField(std::vector<Card*> newCard) { this->handField_ = newCard; }

  // ���ݱ��� �� ī�� ��ȯ
  std::vector<Card*>* Player::scoreField() { return &this->scoreField_;  }

  // �� go Ƚ�� ��ȯ
  int Player::go() { return this->go_; }                 

  // �� go Ƚ�� ����
  void Player::setGo(int goCount) { this->go_ = goCount; }  

  // �� stop ���� ��ȯ
  bool Player::stop() { return this->stop_; }

   // �� stop ���� ����
  void Player::setStop(bool stop) { this->stop_ = stop; }
  