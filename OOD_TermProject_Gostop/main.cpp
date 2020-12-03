#include <iostream>

#include "functions.h"
#include "scoreCalculator.h"

int main() {
  cardBuilder builder;
  Deck a;
  // Funtion ��ü ���� (Singleton)
  Functions *functions = new Functions();
  // �÷��̾� ��ü�� ����
  Player *player1 = new Player("player1");
  Player *player2 = new Player("player2");
  Player *player3 = new Player("player3");
  a.Shuffle();
  // a.BbuckShuffle(); // �� ���� �׽�Ʈ�� ����� ��.

  // player1 ���� ����
  for (int i = 0; i < 7; i++) {
    player1->setHandField(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // player2 ���� ����
  for (int i = 0; i < 7; i++) {
    player2->setHandField(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // player3 ���� ����
  for (int i = 0; i < 7; i++) {
    player3->setHandField(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // �ٴ� �� ����
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    a.GetDeck()->pop();
  }

  // stop �� ���� ���� ���� (�ӽ� �׽�Ʈ)
  while (!a.GetDeck()->empty()) {  // ���� ���� deck empty
    // functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // ����
    // ī�� ����
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
    if (player1->stop() || player2->stop() || player3->stop()) break; // �� �� ������ ������ ����
  }
  if (a.GetDeck()->empty()) std::cout << "���� ��� ";
  if (player1->stop()) {
    std::cout << player1->playerName() << "�� �¸�";
  } else if (player2->stop()) {
    std::cout << player2->playerName() << "�� �¸�";
  } else if (player3->stop()) {
    std::cout << player3->playerName() << "�� �¸�";
  } else {
    std::cout << "���º�";
  }
  std::cout << "�� ���� ���� " << std::endl;
  // ������ ���� ���� ���� ��� ( �ǹ� ���� ��� ��� )
  return 0;
}