#include <iostream>

#include "functions.h"
#include "scoreCalculator.h"

int main() {
  cardBuilder builder;
  Deck a;
  // Funtion 객체 생성 (Singleton)
  Functions *functions = new Functions();
  // 플레이어 객체들 생성
  Player *player1 = new Player("player1");
  Player *player2 = new Player("player2");
  Player *player3 = new Player("player3");
  a.Shuffle();
  // a.BbuckShuffle(); // 뻑 오류 테스트시 사용할 것.

  // player1 손패 세팅
  for (int i = 0; i < 7; i++) {
    player1->setHandField(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // player2 손패 세팅
  for (int i = 0; i < 7; i++) {
    player2->setHandField(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // player3 손패 세팅
  for (int i = 0; i < 7; i++) {
    player3->setHandField(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // 바닥 패 세팅
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // stop 전 까지 게임 진행 (임시 테스트)
  while (!a.GetDeck()->empty()) {  // 종료 조건 deck empty
    // functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // 먹을
    // 카드 고르기
    if (!player1->stop() && !player2->stop() && !player3->stop()) {
      a.Run(player1, player2, player3);
      player1->goStop();
    }

    if (!player1->stop() && !player2->stop() && !player3->stop()) {
      a.Run(player2, player1, player3);
      player2->goStop();
    }

    if (!player1->stop() && !player2->stop() && !player3->stop()) {
      a.Run(player3, player2, player1);
      player3->goStop();
    }
    if (player1->stop() || player2->stop() || player3->stop()) break; // 셋 중 스톱이 나오면 종료
  }
  if (a.GetDeck()->empty()) std::cout << "덱이 비어 ";
  if (player1->stop()) {
    std::cout << player1->playerName() << "의 승리";
  } else if (player2->stop()) {
    std::cout << player2->playerName() << "의 승리";
  } else if (player3->stop()) {
    std::cout << player3->playerName() << "의 승리";
  } else {
    std::cout << "무승부";
  }
  std::cout << "로 게임 종료 " << std::endl;
  // 점수에 따른 벌점 상점 계산 ( 피박 광박 고박 등등 )
  return 0;
}