#ifndef DECK_H
#define DECK_H

#include <stack>
#include <vector>

#include "cardBuilder.h"
#include "player.h"

class Deck {
 public:
  void prints();   // floor 출력
  void Shuffle();  // 카드를 딴 카드배열에 추가
  void BbuckShuffle(); // 뻑 검사를 위한 셔플
  bool ShuffleCheck();  // 나가리 판 검사
  std::vector<Card*>* GetFloor();
  std::stack<Card*>* GetDeck();
  void PairCheck(Player* turn, Card* card, Player* other1,
                 Player* other2);  // turn플레이어의 차례 card와 floor 짝 검사
  void Run(Player* turn, Player* other1, Player* other2);
  Deck();

 private:
  std::stack<Card*>* deck;
  std::vector<Card*>* floor;
};

#endif