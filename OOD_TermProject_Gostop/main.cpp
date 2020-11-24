#include <iostream>
#include "CardBuilder.h"
#include "scoreCalculator.h"
#include "Deck.cpp"
int main() {
  stack<Card*> GameDeck;
  vector<Card*> GameFloor;
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12�� ����").build();
  Deck a;
  a.Shuffle();

  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    std::cout << i <<" �� ° �ٴ� �� :" <<a.GetDeck()->top()->isName() <<endl;
    a.GetDeck()->pop();
  }

  a.prints(); // vector�� ������ ī����� ���


  return 0;
}