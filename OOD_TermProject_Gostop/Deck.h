#ifndef DECK_H
#define DECK_H

#include <vector>
#include <stack>
#include "cardBuilder.h"

class Deck {
 public:
  void prints();               // �տ� �ִ� n��° �� ����
  void Shuffle();  // ī�带 �� ī��迭�� �߰�
  std::vector<Card*>* GetFloor();
  std::stack<Card*>* GetDeck();
  Deck();


 private:

  std::stack<Card*>* deck;
  std::vector<Card*>* floor;
  std::vector<Card*>* get;
};

#endif