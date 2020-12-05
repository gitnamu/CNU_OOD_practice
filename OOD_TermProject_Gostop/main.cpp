#include <iostream>
#include<algorithm>
#include"Deck.h"

int main() {
  Deck a;
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
  int moneyPerScore = 0;
  std::cout << ">> preset <<" << std::endl;
  std::cout << "1점당 얼마로 계산하시겠습니까?(단위: 원) : ";
  std::cin >> moneyPerScore;
  std::cout << ">> 게임 시작! (1점당 " << moneyPerScore << "원) <<" << std::endl;

  // stop 전 까지 게임 진행 (임시 테스트)
  bool deckEmpty = false;
  while (!deckEmpty) {  // 종료 조건 deck empty
    // functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // 먹을
    // 카드 고르기
      a.Run(player1, player2, player3);
      player1->goStop();
      if (player1->stop() || player2->stop() || player3->stop()) {  // 셋 중 스톱이 나오면 종료
        break;
      }

      a.Run(player2, player1, player3);
      player2->goStop();
      if (player1->stop() || player2->stop() || player3->stop()) {  // 셋 중 스톱이 나오면 종료
        break;
      }

      a.Run(player3, player2, player1);
      player3->goStop();
      if (player1->stop() || player2->stop() || player3->stop()) {
        break;
      }
      // 덱이 비면 게임 종료 (정상적으로 카드 배분했으면 player3차례에서만 덱이 빔)
      if (a.GetDeck()->empty()) { deckEmpty = true; }
  }
  //int winningScore = std::max(player1->myScore(), player2->myScore());

  if (deckEmpty) {
    std::cout << "덱이 비어 ";  // 덱이 비어서 종료되었다면 출력
  } else {
  
  }
  
  // 누구의 승리인지 출력
  if (player1->stop()) {      // player1의 승리
    std::cout << "player1의 승리로 게임 종료 " << std::endl << std::endl;
    // 박 계산하여 잃은 금액 출력
    int gap = player1->myScoreByLoser(player2);
    std::cout << "player2는 player1에게 " << gap * moneyPerScore
              << "원을 잃었습니다." << std::endl
              << std::endl;
    gap = player1->myScoreByLoser(player3);
    std::cout << "player3은 player1에게 " << gap * moneyPerScore
              << "원을 잃었습니다." << std::endl
              << std::endl;
    
  }
  else if (player2->stop()) { // player2의 승리
    std::cout << "player2의 승리로 게임 종료 " << std::endl;
    // 박 계산하여 잃은 금액 출력
    int gap = player2->myScoreByLoser(player1);
    std::cout << "player1은 player2에게 " << gap * moneyPerScore
              << "원을 잃었습니다." << std::endl
              << std::endl;
    gap = player2->myScoreByLoser(player3);
    std::cout << "player3은 player2에게 " << gap * moneyPerScore
              << "원을 잃었습니다." << std::endl
              << std::endl;
  }
  else if (player3->stop()) { // player3의 승리
    std::cout << "player3의 승리로 게임 종료 " << std::endl;
    // 박 계산하여 잃은 금액 출력
    int gap = player3->myScoreByLoser(player1);
    std::cout << "player1은 player3에게 " << gap * moneyPerScore
              << "원을 잃었습니다." << std::endl
              << std::endl;
    gap = player3->myScoreByLoser(player2);
    std::cout << "player2는 player3에게 " << gap * moneyPerScore
              << "원을 잃었습니다." << std::endl
              << std::endl;
  }
  else {
    std::cout << "무승부로 게임 종료" << std::endl;
  }
  return 0;
}