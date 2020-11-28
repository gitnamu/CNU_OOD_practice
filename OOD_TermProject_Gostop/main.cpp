#include <iostream>

#include "Deck.h"
#include "player.h"
#include "scoreCalculator.h"
<<<<<<< HEAD
=======
#include "Deck.cpp"
#include"player.h"
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
int main() {
  
  std::cout << "GIT Synchronize Test" << std::endl;
<<<<<<< HEAD
  Deck a; 
=======
  cardBuilder builder;
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12월 열끗").build();
  Deck a;
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
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

<<<<<<< HEAD
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

=======
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
  // player3 손패 세팅
  for (int i = 0; i < 7; i++) {
    player3.setHandField(a.GetDeck()->top());
    std::cout << i << " 번 째 player3 손 패 :"
<<<<<<< HEAD
              << player3.handField()->back()->isName()
              << std::endl;  // 디버깅용 출력
=======
              << player3.handField()->back()->isName() << std::endl;  // 디버깅용 출력
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
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
<<<<<<< HEAD
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
=======
    a.prints();  // vector의 마지막 카드부터 출력
    player1.printMyHandField(); // 내 손 패 출력
    int nthCard;
    std::cout << "몇 번 카드를 낼지 골라주세요 : ";
    std::cin >> nthCard;

    // 범위 밖의 수 입력시 재입력 요청
    while ((nthCard > player1.handField()->size() - 1) || (nthCard < 0)) {
      std::cout << "잘못된 수 입니다. 몇 번 카드를 낼지 다시 골라주세요 : ";
      std::cin >> nthCard;
    }

    std::cout << player1.handOut(nthCard)->isName() << std::endl;
    break;    // 미완성이므로 일단 종료
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
  }
  return 0;
}