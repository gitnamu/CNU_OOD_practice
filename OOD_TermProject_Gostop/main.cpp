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

  for (int i = 0; i < 6; i++) { // ������ �״�� �����ͼ� ����
    a.GetFloor().push_back(a.GetDeck().top());
    a.GetDeck().pop();
  }
  a.prints();
  std::cout << endl << endl<<endl;

  GameDeck = a.GetDeck(); // ���ð� ���͸� �ƿ� ����
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