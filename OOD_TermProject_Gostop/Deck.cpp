#include "Deck.h"

#include <time.h>

#include <iostream>
#define decksize 50

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
                   .setName("7월 열끗")
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
Card* Card49 =
    builder.setType(4).setMonth(0).setSsangP().setName("보너스 쌍피").build();
Card* Card50 =
    builder.setType(4).setMonth(0).setSsangP().setName("보너스 쌍피").build();
Card cardset[50] = {
    *Card1,  *Card2,  *Card3,  *Card4,  *Card5,  *Card6,  *Card7,  *Card8,
    *Card9,  *Card10, *Card11, *Card12, *Card13, *Card14, *Card15, *Card16,
    *Card17, *Card18, *Card19, *Card20, *Card21, *Card22, *Card23, *Card24,
    *Card25, *Card26, *Card27, *Card28, *Card29, *Card30, *Card31, *Card32,
    *Card33, *Card34, *Card35, *Card36, *Card37, *Card38, *Card39, *Card40,
    *Card41, *Card42, *Card43, *Card44, *Card45, *Card46, *Card47, *Card48,
    *Card49, *Card50};

std::vector<Card*>* Deck::GetFloor() { return floor; }
std::stack<Card*>* Deck::GetDeck() { return deck; }
Deck::Deck() : deck(new std::stack<Card*>), floor(new std::vector<Card*>) {}

// 바닥 패 출력
void Deck::prints() {
  std::cout << std::endl << "----------floor-----------" << std::endl;
  int count = floor->size();
  for (int i = 0; i < count; i++) {
    std::cout << floor->at(i)->isName() << std::endl;
  }
  std::cout << "--------------------------" << std::endl;
}

void Deck::PairCheck(Player* turn, Card* card, Player* other1,
                     Player* other2) {  // card와 floor 짝 검사
  int same = 0;
  int arr[3];
  for (int i = 0; i < this->GetFloor()->size(); i++) {
    if (this->GetFloor()->at(i)->cardMonth() == card->cardMonth()) {
      arr[same] = i;
      same++;
    }
  }  // 카드와 this->GetFloor()같은 달 검사
  if (same == 0) {
    std::cout << "[ " << card->isName()
              << " ]이(가) 먹을 수 있는 카드가 없습니다. " << std::endl;
    this->GetFloor()->push_back(card);  // floor에 추가

  } else if (same == 1) {
    std::cout << "[ " << card->isName()
              << " ]이(가) 먹을 수 있는 카드가 1장 있습니다. " << std::endl;
    turn->addScoreField(card);
    turn->addScoreField(this->GetFloor()->at(arr[0]));
    // turn플레이어의 scorefiled에 추가

    std::cout << "[ " << card->isName() << " ] 과 [ "
              << this->GetFloor()->at(arr[0])->isName() << " ] 을 획득"
              << std::endl;

    this->GetFloor()->erase(this->GetFloor()->begin() +
                            arr[0]);  // floor에서 삭제

  } else if (same == 2) {
    int a;
    std::cout << "[ " << card->isName()
              << " ]이(가) 먹을 수 있는 카드가 2장입니다. ( 0, 1 입력 선택 ) "
              << std::endl;
    std::cout << " 0 : " << this->GetFloor()->at(arr[0])->isName() << std::endl
              << " 1 : " << this->GetFloor()->at(arr[1])->isName() << std::endl;
    std::cin >> a;
    while (a < 0 || a > 1) {
      std::cout << "[ 0 과 1 중에 다시 선택하세요. ]" << std::endl;
      std::cin >> a;
    }  // 두 장의 카드 중 1 장 선택
    turn->addScoreField(card);
    turn->addScoreField(this->GetFloor()->at(arr[a]));
    // turn플레이어의 scorefiled에 추가

    std::cout << "[ " << card->isName() << " ] 과 [ "
              << this->GetFloor()->at(arr[a])->isName() << " ] 을 획득"
              << std::endl;
    this->GetFloor()->erase(this->GetFloor()->begin() +
                            arr[a]);  // floor에서 삭제

  } else if (same == 3) {
    std::cout << "[ 뻑을 먹었습니다. ! ]" << std::endl;
    turn->addScoreField(card);
    std::cout << "[ " << card->isName() << " ]";
    for (int i = 0; i < 3; i++) {
      turn->addScoreField(this->GetFloor()->at(arr[i]));
      std::cout << " 과  [ " << this->GetFloor()->at(arr[i])->isName() << " ] ";
    }
    std::cout << " 을 획득" << std::endl;
    other1->giveCard(turn);
    other2->giveCard(turn);
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
      // this->GetFloor()->erase(this->GetFloor()->begin() + arr[i]);  //
      // floor에서 삭제
      // this->GetFloor()->erase(this->GetFloor()->begin() +
      //                       arr[0]);  // 오류 수정 : 플로어 삭제 위치지정
      //                       오류
      this->GetFloor()->erase(this->GetFloor()->begin() + arr[i] - cnt);
      cnt++;
    }
  }
}

void Deck::Run(Player* turn, Player* other1, Player* other2) {
  std::cout << std::endl
            << std::endl
            << " (test) 뒤집을 카드 미리보기 : "
            << this->GetDeck()->top()->isName()
            << std::endl;  // test용 fliped카드 미리보기
  std::vector<Card*>* get = new std::vector<Card*>;
  int same = 0;  // Handout한 패와 바닥패가 같을 때 count
  int arr1[3];   // 같은 패의 index를 담고 있음
  Card* fliped = deck->top();
  deck->pop();

  other1->printMyScoreField();
  other2->printMyScoreField();
  this->prints();
  turn->printMyHandField();
  turn->printMyScoreField();

  // floor와 turn플레이어의 손 패와 먹은 패를 출력한다.

  if (!turn->handField()->empty()) {  // 손패가 비지 않았다면
    Card* handout = turn->handOut();  // 카드를 하나 뽑는다.
    if (handout->cardMonth() == 0) {
      turn->addScoreField(handout);
      std::cout << "보너스 카드를 냈습니다. ! " << std::endl;
    } else {
      std::cout << "HandOut : " << handout->isName() << std::endl;
      std::cout << "Fliped : " << fliped->isName() << std::endl;
      for (int i = 0; i < floor->size(); i++) {
        if (floor->at(i)->cardMonth() == handout->cardMonth()) {
          arr1[same] = i;
          same++;
        }
      }  // 뽑은 카드에 대해 바닥패와 검사
      if (fliped->cardMonth() ==
          handout->cardMonth()) {  // Special Case는 Handout한 패와 뒤집은 패가
                                   // 같을 때 발생
        if (same == 0) {  // 쪽
          std::cout << "[ 쪽 ]" << std::endl;
          get->push_back(handout);
          get->push_back(fliped);
          other1->giveCard(turn);
          other2->giveCard(turn);
        } else if (same == 1) {  // 뻑
          std::cout << "[ 뻑 ]" << std::endl;
          floor->push_back(handout);
          floor->push_back(fliped);
          // 바닥에 깔아둔다.
        } else if (same == 2) {  // 따닥
          std::cout << "[ 따닥 ]" << std::endl;
          get->push_back(handout);
          get->push_back(fliped);
          get->push_back(floor->at(arr1[0]));
          get->push_back(floor->at(arr1[1]));
          // 4장의 카드 get에 넣고
          floor->erase(floor->begin() + arr1[0]);
          floor->erase(floor->begin() + arr1[1]);
          // 2장의 바닥패는 vector에서 삭제
          other1->giveCard(turn);
          other2->giveCard(turn);
        }
        return;  // special case 처리 후 종료
      } else {   // 낸 패와 뒤집은 패가 다를 때
        this->PairCheck(turn, handout, other1, other2);
      }  // handout한 패와 바닥패에 대해 처리
    }
  }  // fliped 한 패와 바닥패에 대해 처리 시작 ( 손 패가 없을 때 여기부터 )
  while (fliped->cardMonth() == 0) {  // 보너스피가 나오면
    std::cout << "보너스 피 획득 !\n 다시 뒤집습니다." << std::endl;
    turn->addScoreField(fliped);
    fliped = deck->top();
    deck->pop();
  }
  this->PairCheck(turn, fliped, other1, other2);
  if (floor->empty()) {  // 턴이 끝날 때 바닥패가 없다면 싹쓸이
    std::cout << "[ 싹쓸이 ! 피를 1장 씩 받으세요. ]" << std::endl;
    other1->giveCard(turn);
    other2->giveCard(turn);
  }
  std::cout << std::endl
            << turn->playerName() << " 의 순서가 종료되었습니다." << std::endl;
  return;
}

// 정리된 카드 배열 무작위로 스택에 푸쉬
void Deck::Shuffle() {
  bool test[decksize];
  for (int i = 0; i < decksize; i++) test[i] = false;
  int arr[decksize];
  int count = 0;
  Card* tempCard;
  srand((unsigned int)time(NULL));
  while (count < decksize) {
    int num = rand() % decksize;
    if (test[num] != true) {
      test[num] = true;
      arr[count] = num;
      tempCard = &cardset[num];
      deck->push(tempCard);
      count++;
    }
  }
  if (ShuffleCheck()) {
    this->Shuffle();
  }
}
void Deck::BbuckShuffle() {  // 뻑 검사를 위한 테스트용 함수. 카드가 무조건
                             // 정순으로 섞임.
  bool test[decksize];
  for (int i = 0; i < decksize; i++) test[i] = false;
  int arr[decksize];
  int count = 0;
  Card* tempCard;
  srand((unsigned int)time(NULL));
  while (count < decksize) {
    int num = rand() % decksize;
    if (test[count] != true) {
      test[count] = true;
      arr[count] = count;
      tempCard = &cardset[count];
      deck->push(tempCard);
      count++;
    }
  }
}
bool Deck::ShuffleCheck() {
  bool check = false;
  Card* a[6];
  int monthcount[12];  // 카드가 1월이면 0번 인덱스에 , 2월이면 1번 인덱스에 ,,
                       // +1
  for (int i = 0; i < 12; i++) monthcount[i] = 0;  // 0으로 초기화
  for (int i = 0; i < 6; i++) {
    a[i] = this->deck->top();
    deck->pop();
    if (a[i]->cardMonth() != 0) { // 보너스피는 no count
      monthcount[a[i]->cardMonth() - 1]++;
    }
  }  // 꺼내서 확인
  for (int i = 5; i >= 0; i--) {  // 마지막에 꺼낸 카드부터 push
    deck->push(a[i]);
  }  // 도로 집어넣는다.

  // 검사
  for (int i = 0; i < 12; i++) {
    if (monthcount[i] == 4) {               // 4개가 바닥에 깔리면
      std::cout << "나가리!" << std::endl;  // 나가리
      check = true;
      break;  // 탈출
    }
  }
  return check;
}
