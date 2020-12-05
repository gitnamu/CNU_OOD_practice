#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Card.h"

struct ScoreField {
  std::vector<Card*> myGwang;   // 내가 얻은 광
  std::vector<Card*> myRibbon;  // 내가 얻은 단
  std::vector<Card*> myYeol;    // 내가 얻은 열끗
  std::vector<Card*> mySsangP;  // 내가 얻은 피
  std::vector<Card*> myP;       // 내가 얻은 피

  int godori;       // 고도리
  int red_ribbon;   // 홍단
  int blue_ribbon;  // 초단
  int cho_ribbon;   // 초단

  ScoreField();
};

class Player {
 public:
  Player(std::string playerName);    // 1인자 생성자
  Card* handOut();                   // player 손 패 중 1장 고르기
  void addScoreField(Card* newCard); // 카드를 딴 카드배열에 추가

  bool giveCard(Player* other);      // 상대방에게 카드 주기
  int myScore(); // 내 점수

  void printMyHandField();           // 내 손 패 출력
  void printMyScoreField();          // 내 손 패 출력
  void goStop();                     // 고 , 스톱 결정
  int myScoreByLoser(Player* other); // 내가 이겼을때 박을 적용한 상대적 점수
  bool shakable();                   // 흔들기 가능한지 여부 확인

  // Getters & Setters
  std::string playerName();          // 플레이어 이름 반환
  std::vector<Card*>* handField();   // 손 패 반환
  void setHandField(Card* newCard);  // 처음 시작할때 손 패 얻기
  struct ScoreField* scoreField();   // 내가 얻은 패 반환
  int go();                          // 내 go 횟수 반환
  void setGo(int goCount);           // 내 go 횟수 설정
  int score();                       // 내 score 반환
  void setScore(int newscore);       // 내 score 설정
  bool stop();                       // 내 stop 여부 반환
  void setStop(bool stop);           // 내 stop 여부 설정
  int shake();                       // 흔들기 횟수 반환

 private:
  Player();                        // 생성자
  const std::string playerName_;   // 플레이어 이름
  std::vector<Card*> handField_;   // 손에 있는 패
  struct ScoreField scoreField_;   // 내가 얻은 패
  int go_ ;                        // go 횟수
  int score_;                      // 점수
  bool stop_;                      // stop 여부
  int shake_;                      // 흔들기 횟수
};

#endif