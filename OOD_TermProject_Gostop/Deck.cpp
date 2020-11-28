#include "Deck.h"

#include <time.h>

#include <iostream>

cardBuilder builder;

Card* Card1 =
    builder.setType(1).setWhere(3).setMonth(1).setName("1월 광").build();
Card* Card2 = builder.setType(3)
                  .setWhere(3)
                  .setMonth(1)
                  .setRibbon(1)
                  .setName("1월 홍단")
                  .build();
Card* Card3 =
    builder.setType(4).setWhere(3).setMonth(1).setName("1월 피").build();
Card* Card4 =
    builder.setType(4).setWhere(3).setMonth(1).setName("1월 피").build();
Card* Card5 = builder.setType(2)
                  .setWhere(3)
                  .setMonth(2)
                  .setGodori()
                  .setName("2월 고도리")
                  .build();
Card* Card6 = builder.setType(3)
                  .setWhere(3)
                  .setMonth(2)
                  .setRibbon(1)
                  .setName("2월 홍단")
                  .build();
Card* Card7 =
    builder.setType(4).setWhere(3).setMonth(2).setName("2월 피").build();
Card* Card8 =
    builder.setType(4).setWhere(3).setMonth(2).setName("2월 피").build();
Card* Card9 =
    builder.setType(1).setWhere(3).setMonth(3).setName("3월 광").build();
Card* Card10 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(3)
                   .setRibbon(1)
                   .setName("3월 홍단")
                   .build();
Card* Card11 =
    builder.setType(4).setWhere(3).setMonth(3).setName("3월 피").build();
Card* Card12 =
    builder.setType(4).setWhere(3).setMonth(3).setName("3월 피").build();
Card* Card13 = builder.setType(2)
                   .setWhere(3)
                   .setMonth(4)
                   .setGodori()
                   .setName("4월 고도리")
                   .build();
Card* Card14 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(4)
                   .setRibbon(3)
                   .setName("4월 초단")
                   .build();
Card* Card15 =
    builder.setType(4).setWhere(3).setMonth(4).setName("4월 피").build();
Card* Card16 =
    builder.setType(4).setWhere(3).setMonth(4).setName("4월 피").build();
Card* Card17 =
    builder.setType(2).setWhere(3).setMonth(5).setName("5월 열끗").build();
Card* Card18 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(5)
                   .setRibbon(3)
                   .setName("5월 초단")
                   .build();
Card* Card19 =
    builder.setType(4).setWhere(3).setMonth(5).setName("5월 피").build();
Card* Card20 =
    builder.setType(4).setWhere(3).setMonth(5).setName("5월 피").build();
Card* Card21 =
    builder.setType(2).setWhere(3).setMonth(6).setName("6월 열끗").build();
Card* Card22 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(6)
                   .setRibbon(2)
                   .setName("6월 청단")
                   .build();
Card* Card23 =
    builder.setType(4).setWhere(3).setMonth(6).setName("6월 피").build();
Card* Card24 =
    builder.setType(4).setWhere(3).setMonth(6).setName("6월 피").build();
Card* Card25 = builder.setType(2)
                   .setWhere(3)
                   .setMonth(7)
                   .setGodori()
                   .setName("7월 고도리")
                   .build();
Card* Card26 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(7)
                   .setRibbon(3)
                   .setName("7월 초단")
                   .build();
Card* Card27 =
    builder.setType(4).setWhere(3).setMonth(7).setName("7월 피").build();
Card* Card28 =
    builder.setType(4).setWhere(3).setMonth(7).setName("7월 피").build();
Card* Card29 =
    builder.setType(1).setWhere(3).setMonth(8).setName("8월 광").build();
Card* Card30 = builder.setType(2)
                   .setWhere(3)
                   .setMonth(8)
                   .setGodori()
                   .setName("8월 고도리")
                   .build();
Card* Card31 =
    builder.setType(4).setWhere(3).setMonth(8).setName("8월 피").build();
Card* Card32 =
    builder.setType(4).setWhere(3).setMonth(8).setName("8월 피").build();
Card* Card33 = builder.setType(4)
                   .setWhere(3)
                   .setMonth(9)
                   .setSsangP()
                   .setName("9월 쌍피")
                   .build();
Card* Card34 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(9)
                   .setRibbon(2)
                   .setName("9월 청단")
                   .build();
Card* Card35 =
    builder.setType(4).setWhere(3).setMonth(9).setName("9월 피").build();
Card* Card36 =
    builder.setType(4).setWhere(3).setMonth(9).setName("9월 피").build();
Card* Card37 =
    builder.setType(2).setWhere(3).setMonth(10).setName("10월 열끗").build();
Card* Card38 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(10)
                   .setRibbon(2)
                   .setName("10월 청단")
                   .build();
Card* Card39 =
    builder.setType(4).setWhere(3).setMonth(10).setName("10월 피").build();
Card* Card40 =
    builder.setType(4).setWhere(3).setMonth(10).setName("10월 피").build();
Card* Card41 =
    builder.setType(1).setWhere(3).setMonth(11).setName("11월 광").build();
Card* Card42 = builder.setType(4)
                   .setWhere(3)
                   .setMonth(11)
                   .setSsangP()
                   .setName("11월 쌍피")
                   .build();
Card* Card43 =
    builder.setType(4).setWhere(3).setMonth(11).setName("11월 피").build();
Card* Card44 =
    builder.setType(4).setWhere(3).setMonth(11).setName("11월 피").build();
Card* Card45 = builder.setType(1)
                   .setWhere(3)
                   .setMonth(12)
                   .setBgwang()
                   .setName("12월 광")
                   .build();
Card* Card46 =
    builder.setType(2).setWhere(3).setMonth(12).setName("12월 열끗").build();
Card* Card47 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(12)
                   .setRibbon(3)
                   .setName("12월 초단")
                   .build();
Card* Card48 = builder.setType(4)
                   .setWhere(3)
                   .setMonth(12)
                   .setSsangP()
                   .setName("12월 쌍피")
                   .build();
Card cardset[48] = {
    *Card1,  *Card2,  *Card3,  *Card4,  *Card5,  *Card6,  *Card7,  *Card8,
    *Card9,  *Card10, *Card11, *Card12, *Card13, *Card14, *Card15, *Card16,
    *Card17, *Card18, *Card19, *Card20, *Card21, *Card22, *Card23, *Card24,
    *Card25, *Card26, *Card27, *Card28, *Card29, *Card30, *Card31, *Card32,
    *Card33, *Card34, *Card35, *Card36, *Card37, *Card38, *Card39, *Card40,
    *Card41, *Card42, *Card43, *Card44, *Card45, *Card46, *Card47, *Card48};

std::vector<Card*>* Deck::GetFloor() { return floor; }
std::stack<Card*>* Deck::GetDeck() { return deck; }
Deck::Deck() : deck(new std::stack<Card*>), floor(new std::vector<Card*>) {}
// 바닥 패 출력
void Deck::prints() {
  std::cout << std::endl << "----바닥에 깔려있는 패----" << std::endl;
  int count = floor->size();
  Card* card;
  for (int i = 0; i < count; i++) {
    std::cout << floor->at(i)->isName() << std::endl;
  }
  std::cout << "--------------------------" << std::endl;
}

void Deck::Run(Player turn, Player other1, Player other2,
                              Card* n) {
  std::vector<Card*>* get = new std::vector<Card*>;
  int same = 0; // Handout한 패와 바닥패가 같을 때 count
  int same2 = 0; // 뒤집은 패와 바닥패가 같을 때 count
  int arr1[3], arr2[3];  // 같은 패의 index를 담고 있음

  Card* fliped = deck->top();
  deck->pop();
  std::cout << "Fliped : "<<fliped->isName() << std::endl;
  for (int i = 0; i < floor->size(); i++) {
    if (floor->at(i)->cardMonth() == n->cardMonth()) {
      arr1[same] = i;
      same++;
    }
  }
  for (int i = 0; i < floor->size(); i++) {
    if (floor->at(i)->cardMonth() == fliped->cardMonth()) {
      arr2[same2] = i;
      same2++;
    }
  }
  if (fliped->cardMonth() == n->cardMonth()) {  // Special Case는 Handout한 패와 뒤집은 패가 같을 때 발생
    if (same == 0) {                            // 쪽
      std::cout << "! 쪽 " << std::endl;
      get->push_back(n);
      get->push_back(fliped);
    } else if (same == 1 ) {  // 뻑
      std::cout << "! 뻑 " << std::endl;
      floor->push_back(n);
      floor->push_back(fliped);
       // 바닥에 깔아둔다.
    } else if (same == 2 ) {  // 따닥
      std::cout << "! 따닥 " << std::endl;
      get->push_back(n);
      get->push_back(fliped);
      get->push_back(floor->at(arr1[0]));
      get->push_back(floor->at(arr1[1]));
       // 4장의 카드 get에 넣고
      floor->erase(floor->begin() + arr1[0]); 
      floor->erase(floor->begin() + arr1[1]);
       // 2장의 바닥패는 vector에서 삭제
    }
    other1.giveCard(&turn);
    other2.giveCard(&turn);
    // Special Case : 다른 플레이어가 turn플레이어에게 피를 1장 지급해야함

  } else {  // 낸 패와 뒤집은 패가 다를 때

    if (same == 0) {
      std::cout << " 낸 패로 먹을 수 있는 카드가 없습니다. " << std::endl;
      floor->push_back(n);

    } else if (same == 1) {
      std::cout << " 낸 패로 먹을 수 있는 카드가 1장 있습니다." << std::endl;
      get->push_back(n); // 낸 패를 get에 추가
      get->push_back(floor->at(arr1[0])); // 획득한 바닥 패를 get에 추가
      floor->erase(floor->begin() + arr1[0]);  // 획득한 바닥 패를 floor에서 삭제

    } else if (same == 2) {
      int a;
      std::cout << "먹을 수 있는 카드가 2장입니다. ( 0, 1 입력 선택 )"
                << std::endl;
      std::cout << " 0 : " << floor->at(arr1[0])->isName() << std::endl
                << " 1 : " << floor->at(arr1[1])->isName() << std::endl;
      std::cin >> a;
      while (a < 0 || a > 1) {
        std::cout << "0 과 1 중에 다시 선택하세요." << std::endl;
        std::cin >> a;
      } // 두 장의 카드 중 1 장 선택
      get->push_back(n); // 낸 패를 get에 추가
      get->push_back(floor->at(arr1[a])); // 선택한 바닥 패를 get에 추가
      floor->erase(floor->begin() + arr1[a]);  // 선택한 바닥 패를 floor에서 삭제

    } else if (same == 3) {
      std::cout << " 뻑을 먹었습니다. ! " << std::endl;
      get->push_back(n);
      for (int i = 0; i < 3; i++) {
        get->push_back(floor->at(arr1[i]));
        floor->erase(floor->begin() + arr1[i]);
      }
    }   // Handout 한 패와 바닥패에 대해서 처리


    if (same2 == 0) {
      std::cout << " 뒤집은 패로 먹을 수 있는 카드가 없습니다. " << std::endl;
      floor->push_back(fliped);
    } else if (same2 == 1) {
      std::cout << " 뒤집은 패로 먹을 수 있는 카드가 1장 있습니다." << std::endl;
      get->push_back(fliped);                   // 뒤집은 패를 get에 추가
      get->push_back(floor->at(arr2[0]));  // 획득한 바닥 패를 get에 추가
      floor->erase(floor->begin() + arr2[0]);  // 획득한 바닥 패를 floor에서 삭제
    } else if (same2 == 2) {
      int a;
      std::cout << "먹을 수 있는 카드가 2장입니다. ( 0, 1 입력 선택 )"
                << std::endl;
      std::cout << " 0 : " << floor->at(arr2[0])->isName() << std::endl
                << " 1 : " << floor->at(arr2[1])->isName() << std::endl;
      std::cin >> a;
      while (a < 0 || a > 1) {
        std::cout << "0 과 1 중에 다시 선택하세요." << std::endl;
        std::cin >> a;
      }
      get->push_back(fliped);                   // 뒤집은 패를 get에 추가
      get->push_back(floor->at(arr2[a]));  // 선택한 바닥 패를 get에 추가
      floor->erase(floor->begin() + arr2[a]);  // 선택한 바닥 패를 floor에서 삭제
    } else if (same2 == 3) {
      std::cout << " 뻑을 먹었습니다. ! " << std::endl;
      get->push_back(fliped);
      for (int i = 0; i < 3; i++) {
        get->push_back(floor->at(arr2[i]));
        floor->erase(floor->begin() + arr2[i]);
      }
    }  // 뒤집은 패와 바닥패에 대해서 처리

  }


  std::cout << std::endl << " 이번 판에 획득한 카드 목록 " << std::endl;
  for (int i = 0; i < get->size(); i++) {
    std::cout << get->at(i)->isName() << std::endl; 
    turn.addScoreField(get->at(i)); // turn 플레이어 스코어필드에 추가
  }
  std::cout << std::endl<< turn.playerName() << " 의 순서가 종료되었습니다." << std::endl;
}

// 정리된 카드 배열 무작위로 스택에 푸쉬
void Deck::Shuffle() {
  bool test[48];
  int arr[48];
  int count = 0;
  Card* tempCard;
  srand((unsigned int)time(NULL));
  while (count < 48) {
    int num = rand() % 48;
    if (test[num] != true) {
      test[num] = true;
      arr[count] = num;
      tempCard = &cardset[num];
      deck->push(tempCard);
      count++;
    }
  }
}
