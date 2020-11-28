#include <iostream>

#include"functions.h"
#include "scoreCalculator.h"

int main() {
  
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12월 열끗").build();
  Deck a;
  // Funtion 객체 생성 (Singleton)
  Functions* functions = new Functions();
  // 플레이어 객체들 생성
  Player player1 = Player::Player("player1");
  Player player2 = Player::Player("player2");
  Player player3 = Player::Player("player3");
  a.Shuffle();
  
  // player1 손패 세팅
  for (int i = 0; i < 7; i++) {
    player1.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player1 손 패 :" << player1.handField()->back()->isName() << std::endl; // 디버깅용 출력
    a.GetDeck()->pop();
  }

  // player2 손패 세팅
  for (int i = 0; i < 7; i++) {
    player2.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player2 손 패 :"
              << player2.handField()->back()->isName() << std::endl;  // 디버깅용 출력
    a.GetDeck()->pop();
  }

  // player3 손패 세팅
  for (int i = 0; i < 7; i++) {
    player3.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player3 손 패 :"
              << player3.handField()->back()->isName() << std::endl;  // 디버깅용 출력
    a.GetDeck()->pop();
  }

  // 바닥 패 세팅
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    std::cout << i << " 번 째 바닥 패 :" << a.GetDeck()->top()->isName()
              << std::endl;
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

    Card* player1_ChoosedCard = player1.handOut(nthCard);           // 내가 낼 카드
    functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // 먹을 카드 고르기
    Card* openedDeckCard = a.GetDeck()->top();                      // 덱에서 카드 한장 뒤집기
    a.GetDeck()->pop();                                             // 뽑은 카드 덱에서 pop
    std::cout << "덱에서 카드를 뒤집어 ";
    functions->chooseCardToEat(&a, &player1, openedDeckCard);       // 뒤집은 카드로 바닥패 중 뭐 먹을지 고르기
    
  }
  return 0;
}