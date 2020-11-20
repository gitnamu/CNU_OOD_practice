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
      builder.setType(2).setWhere(3).setMonth(12).setName("12월 열끗").build();
  Deck a;
  a.Shuffle();

  for (int i = 0; i < 6; i++) { // 스택을 그대로 가져와서 오류
    a.GetFloor().push_back(a.GetDeck().top());
    a.GetDeck().pop();
  }
  a.prints();
  std::cout << endl << endl<<endl;

  GameDeck = a.GetDeck(); // 스택과 벡터를 아예 복사
  GameFloor = a.GetFloor();
  for (int i = 0; i < 6; i++) {
    GameFloor.push_back(GameDeck.top());
    GameDeck.pop();
  }
  for (int i = 0; i < 6; i++) {
    std::cout << GameFloor.back()->isName() << std::endl;
    GameFloor.pop_back();
  }

  return 0;
}