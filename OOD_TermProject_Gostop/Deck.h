#ifndef DECK_H
#define DECK_H

#include <vector>
#include <stack>
#include "cardBuilder.h"
#include "player.h"

class Deck {
 public:
  void prints();  
  void Shuffle();  // 카드를 딴 카드배열에 추가
  std::vector<Card*>* GetFloor();
  std::stack<Card*>* GetDeck();
  void Run(Player turn, Player other1, Player other2, Card* n);
  Deck();


 private:

  std::stack<Card*>* deck;
  std::vector<Card*>* floor;
};

#endif