#include <iostream>
#include<algorithm>
#include"Deck.h"

int main() {
  Deck a;
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
  int moneyPerScore = 0;
  std::cout << ">> preset <<" << std::endl;
  std::cout << "1���� �󸶷� ����Ͻðڽ��ϱ�?(����: ��) : ";
  std::cin >> moneyPerScore;
  std::cout << ">> ���� ����! (1���� " << moneyPerScore << "��) <<" << std::endl;

  // stop �� ���� ���� ���� (�ӽ� �׽�Ʈ)
  bool deckEmpty = false;
  while (!deckEmpty) {  // ���� ���� deck empty
    // functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // ����
    // ī�� ����
      a.Run(player1, player2, player3);
      player1->goStop();
      if (player1->stop() || player2->stop() || player3->stop()) {  // �� �� ������ ������ ����
        break;
      }

      a.Run(player2, player1, player3);
      player2->goStop();
      if (player1->stop() || player2->stop() || player3->stop()) {  // �� �� ������ ������ ����
        break;
      }

      a.Run(player3, player2, player1);
      player3->goStop();
      if (player1->stop() || player2->stop() || player3->stop()) {
        break;
      }
      // ���� ��� ���� ���� (���������� ī�� ��������� player3���ʿ����� ���� ��)
      if (a.GetDeck()->empty()) { deckEmpty = true; }
  }
  //int winningScore = std::max(player1->myScore(), player2->myScore());

  if (deckEmpty) {
    std::cout << "���� ��� ";  // ���� �� ����Ǿ��ٸ� ���
  } else {
  
  }
  
  // ������ �¸����� ���
  if (player1->stop()) {      // player1�� �¸�
    std::cout << "player1�� �¸��� ���� ���� " << std::endl << std::endl;
    // �� ����Ͽ� ���� �ݾ� ���
    int gap = player1->myScoreByLoser(player2);
    std::cout << "player2�� player1���� " << gap * moneyPerScore
              << "���� �Ҿ����ϴ�." << std::endl
              << std::endl;
    gap = player1->myScoreByLoser(player3);
    std::cout << "player3�� player1���� " << gap * moneyPerScore
              << "���� �Ҿ����ϴ�." << std::endl
              << std::endl;
    
  }
  else if (player2->stop()) { // player2�� �¸�
    std::cout << "player2�� �¸��� ���� ���� " << std::endl;
    // �� ����Ͽ� ���� �ݾ� ���
    int gap = player2->myScoreByLoser(player1);
    std::cout << "player1�� player2���� " << gap * moneyPerScore
              << "���� �Ҿ����ϴ�." << std::endl
              << std::endl;
    gap = player2->myScoreByLoser(player3);
    std::cout << "player3�� player2���� " << gap * moneyPerScore
              << "���� �Ҿ����ϴ�." << std::endl
              << std::endl;
  }
  else if (player3->stop()) { // player3�� �¸�
    std::cout << "player3�� �¸��� ���� ���� " << std::endl;
    // �� ����Ͽ� ���� �ݾ� ���
    int gap = player3->myScoreByLoser(player1);
    std::cout << "player1�� player3���� " << gap * moneyPerScore
              << "���� �Ҿ����ϴ�." << std::endl
              << std::endl;
    gap = player3->myScoreByLoser(player2);
    std::cout << "player2�� player3���� " << gap * moneyPerScore
              << "���� �Ҿ����ϴ�." << std::endl
              << std::endl;
  }
  else {
    std::cout << "���ºη� ���� ����" << std::endl;
  }
  return 0;
}