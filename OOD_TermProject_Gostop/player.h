#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Card.h"

class Player {
 public:
  Card* handOut(int n);               // 손에 있는 n번째 패 내기
  void addScoreField(Card* newCard);  // 카드를 딴 카드배열에 추가
  bool giveCard(Player* other,Card* looseCard);    // 상대방에게 카드 주기
  int myScore();                      // 내 점수
  void printMyHandField();
  Player(std::string playerName);  // 1인자 생성자

  // Getters & Setters
  std::string playerName();          // 플레이어 이름 반환
  std::vector<Card*>* handField();   // 손 패 반환
  void setHandField(Card* newCard);  // 처음 시작할때 손 패 얻기
  std::vector<Card*>* scoreField();  // 지금까지 딴 카드 반환
  int go();                          // 내 go 횟수 반환
  void setGo(int goCount);           // 내 go 횟수 설정
  bool stop();                       // 내 stop 여부 반환
  void setStop(bool stop);           // 내 stop 여부 설정

 private:
  Player();                        // 생성자
  const std::string playerName_;   // 플레이어 이름
  std::vector<Card*> handField_;   // 손에 있는 패
  std::vector<Card*> scoreField_;  // 얻은 패
  int go_;                         // go 횟수
  bool stop_;                      // stop 여부
};

#endif
