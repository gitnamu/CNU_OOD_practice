#include <iostream>
#include "CardBuilder.h"
#include "scoreCalculator.h"
#include "Deck.h"
#include "player.h"
int main() {
  stack<Card*> GameDeck;
  vector<Card*> GameFloor;
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  scoreCalculator calculator;
  /*
  // 광 Test Case: 비광 한장과 3월광, 8월광을 가진 상태로(광 2점)
  //

  Card* newCard1 = builder.setType(2)
                       .setWhere(0)
                       .setMonth(9)
                       .setRibbon(0)
                       .build();  // 9월1>열끗피
  // newCard1->printAllData();
  std::vector<Card*> newCardVector;  //테스트용 벡터
  Card* testCard01 = builder.setType(1)
                         .setWhere(0)
                         .setMonth(12)
                         .setBgwang()
                         .build();  //비광
  Card* testCard02 =
      builder.setType(1).setWhere(0).setMonth(11).build();  //똥광
  Card* testCard03 =
      builder.setType(1).setWhere(0).setMonth(8).build();  // 8월광
  Card* testCard04 = builder.setType(3)
                         .setWhere(0)
                         .setMonth(4)
                         .setRibbon(3)
                         .build();  // 4월초(2)
  Card* testCard05 = builder.setType(3)
                         .setWhere(0)
                         .setMonth(5)
                         .setRibbon(3)
                         .build();  // 5월초(2)
  Card* testCard06 =
      builder.setType(2).setWhere(0).setMonth(12).build();  // 12월
                                                                        // 열끗
  Card* testCard07 =
      builder.setType(2).setWhere(0).setMonth(10).build();  // 10월
                                                                        // 열끗
  Card* testCard08 =
      builder.setType(2).setWhere(0).setMonth(4).build();  // 4월
                                                                       // 열끗
  Card* testCard09 =
      builder.setType(2).setWhere(0).setMonth(2).build();  // 2월
                                                                       // 열끗
  Card* testCard10 =
      builder.setType(4).setWhere(0).setMonth(11).build();  // 11-4
  Card* testCard11 =
      builder.setType(4).setWhere(0).setMonth(10).build();  // 10-3
  Card* testCard12 =
      builder.setType(4).setWhere(0).setMonth(10).build();  // 10-4
  Card* testCard13 =
      builder.setType(4).setWhere(0).setMonth(9).build();  // 9-3
  Card* testCard14 =
      builder.setType(4).setWhere(0).setMonth(9).build();  // 9-4
  Card* testCard15 = builder.setType(4)
                         .setWhere(0)
                         .setMonth(12)
                         .setSsangP()
                         .build();  // 12-4(쌍피)
  Card* testCard16 = builder.setType(4)
                         .setWhere(0)
                         .setMonth(9)
                         .setSsangP()
                         .build();  // 9-1(쌍피)
  Card* testCard17 =
      builder.setType(4).setWhere(0).setMonth(6).build();  // 6-4
  Card* testCard18 =
      builder.setType(4).setWhere(0).setMonth(4).build();  // 4-4
  Card* testCard19 =
      builder.setType(4).setWhere(0).setMonth(3).build();  // 3-3
  Card* testCard20 =
      builder.setType(4).setWhere(0).setMonth(11).build();  // 11-3
  Card* testCard21 =
      builder.setType(4).setWhere(0).setMonth(11).setSsangP().build();  // 11-2

  //newCardVector.push_back(newCard1);
  newCardVector.push_back(testCard01);
  newCardVector.push_back(testCard02);
  newCardVector.push_back(testCard03);
  newCardVector.push_back(testCard04);
  newCardVector.push_back(testCard05);
  newCardVector.push_back(testCard06);
  newCardVector.push_back(testCard07);
  newCardVector.push_back(testCard08);
  newCardVector.push_back(testCard09);
  newCardVector.push_back(testCard10);
  newCardVector.push_back(testCard11);
  newCardVector.push_back(testCard12);
  newCardVector.push_back(testCard13);
  newCardVector.push_back(testCard14);
  newCardVector.push_back(testCard15);
  newCardVector.push_back(testCard16);
  newCardVector.push_back(testCard17);
  newCardVector.push_back(testCard18);
  newCardVector.push_back(testCard19);
  newCardVector.push_back(testCard20);
  newCardVector.push_back(testCard21);
  std::cout << "최종 점수 : " << calculator.score(newCardVector) << std::endl;

    // Tabby Test Area // */

  /*class testClass {
   public:
    std::vector<Card*>* getVector() { return newvector; }
    void inputElement(Card* carddata) { newvector->push_back(carddata); }
    Card* getElement() { return newvector->at(0); }
   private:
    std::vector<Card*>* newvector = new std::vector<Card*>;
  };

  testClass* newClass = new testClass();
  newClass->inputElement(testCard01);
  newClass->getElement()->printAllData();
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12월 열끗").build();
  Deck a;
  a.Shuffle();
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    std::cout << i <<" 번 째 바닥 패 :" <<a.GetDeck()->top()->isName() <<endl;
    a.GetDeck()->pop();
  }

  a.prints(); // vector의 마지막 카드부터 출력
  */

  // YYS Test Area //
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12월 열끗").build();
  Deck a;
  // 플레이어 객체들 생성
  Player player1 = Player::Player("player1");
  Player player2 = Player::Player("player2");
  Player player3 = Player::Player("player3");
  a.Shuffle();

  // player1 손패 세팅
  for (int i = 0; i < 7; i++) {
    player1.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player1 손 패 :"
              << player1.handField()->back()->isName()
              << std::endl;  // 디버깅용 출력
    a.GetDeck()->pop();
  }

  // player2 손패 세팅
  for (int i = 0; i < 7; i++) {
    player2.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player2 손 패 :"
              << player2.handField()->back()->isName()
              << std::endl;  // 디버깅용 출력
    a.GetDeck()->pop();
  }

  // player3 손패 세팅
  for (int i = 0; i < 7; i++) {
    player3.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player3 손 패 :"
              << player3.handField()->back()->isName()
              << std::endl;  // 디버깅용 출력
    a.GetDeck()->pop();
  }

  // 바닥 패 세팅
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    std::cout << i << " 번 째 바닥 패 :" << a.GetDeck()->top()->isName()
              << endl;
    a.GetDeck()->pop();
  }

  // stop 전 까지 게임 진행 (임시 테스트)
  while (!player1.stop() && !player2.stop() && !player3.stop()) {
    a.prints();                  // vector의 마지막 카드부터 출력
    player1.printMyHandField();  // 내 손 패 출력
    int nthCard;
    std::cout << "몇 번 카드를 낼지 골라주세요 : ";
    std::cin >> nthCard;

    // 범위 밖의 수 입력시 재입력 요청
    while ((nthCard > player1.handField()->size() - 1) || (nthCard < 0)) {
      std::cout << "잘못된 수 입니다. 몇 번 카드를 낼지 다시 골라주세요 : ";
      std::cin >> nthCard;
    }

    std::cout << player1.handOut(nthCard)->isName() << std::endl;
    break;  // 미완성이므로 일단 종료
  }
  return 0;
}