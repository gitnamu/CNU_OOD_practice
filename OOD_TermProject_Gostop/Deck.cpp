#include <iostream>
#include <stack>

#include "cardBuilder.h"
#include <time.h>
#include <vector>
using namespace std;

class Deck {
 private:
  
  
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
  stack<Card*> deck;
  std::vector<Card*> floor;
 public:

  vector<Card*> GetFloor() { return floor; }
  stack<Card*> GetDeck() { return deck; }
  void prints() {
    std::cout <<"현재 바닥의 패 수 : "<< floor.size()<<std::endl;
    int count = 0;  
    Card* card;
    while (!floor.empty()) {
      card = floor.back();
      floor.pop_back();
      std::cout << card->isName() << std::endl;
      count++;
    }
    std::cout << count << "번 꺼냄";
  }
  void Shuffle() { // 정리된 카드 배열 무작위로 스택에 푸쉬
    bool test[48];
    int arr[48];
    int count = 0;
    Card *tempCard;
    srand((unsigned int)time(NULL));
    while (count < 48) {
      int num = rand() % 48;
      if (test[num] != true) {
        test[num] = true;
        arr[count] = num;
        tempCard = &cardset[num];
        deck.push(tempCard);
        count++;
      }
    }




    /*for (int i = 0; i < 48; i++) {
        rx = rand() % 48;
        ry = rand() % 48;
        if (rx != ry) {
          tempCard = &cardset[rx];
          std::cout << tempCard->isName() << std::endl;
          s.push(tempCard);
        
      }*/
      //cardset[i] = cardset[rn];
      //cardset[rn] = tempCard;
      //cardset[temp].printAllData();
    }
};

