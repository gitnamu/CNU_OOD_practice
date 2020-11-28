#ifndef DECK_H
#define DECK_H

#include <vector>
#include <stack>
#include "cardBuilder.h"

class Deck {
 public:
  void prints();               // 손에 있는 n번째 패 내기
  void Shuffle();  // 카드를 딴 카드배열에 추가
  std::vector<Card*>* GetFloor();
  std::stack<Card*>* GetDeck();
  Deck();


 private:

  std::stack<Card*>* deck;
  std::vector<Card*>* floor;
  std::vector<Card*>* get;
};

#endif