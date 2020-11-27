
#include"player.h"
#include<iostream>

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
    this->scoreField().push_back(newCard);
  }
  
  // ���濡�� �� ���� �ֱ�
  Card* Player::giveCard(Card* looseCard) { 
    std::vector<Card*>::iterator iter = handField().end();
    int n = handField().size();
    while (handField().at(n)->isBgwang() || handField().at(n)->isGodori() ||
           handField().at(n)->isBgwang()) {
      if (n >= 1) {
        n--;      
      } else {
        break;
      }
      iter += n;
      Card* outCard = this->handField().at(n);
      this->scoreField().erase(iter);
      return outCard;
    }

  }
  

  // Getters & Setters
  // �� �� ��ȯ
  std::vector<Card*> Player::handField() { return this->handField_; }

  // ó�� �����Ҷ� �� �� ���
  void Player::setHandField(std::vector<Card*> newCard) { this->handField_ = newCard; }

  // ���ݱ��� �� ī�� ��ȯ
  std::vector<Card*> Player::scoreField() { return this->scoreField_;  }

  // �� go Ƚ�� ��ȯ
  int Player::go() { return this->go_; }                 

  // �� go Ƚ�� ����
  void Player::setGo(int goCount) { this->go_ = goCount; }  

  // �� stop ���� ��ȯ
  bool Player::stop() { return this->stop_; }

   // �� stop ���� ����
  void Player::setStop(bool stop) { this->stop_ = stop; }
  