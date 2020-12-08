#include <iostream>
#include<algorithm>
#include <Windows.h>

#include "GameSet.h"
#include "scoreCalculator.h"

int main() {
  GameSet a;
  // �÷��̾� ��ü�� ����
  Player *player1 = new Player("player1");
  Player *player2 = new Player("player2");
  Player *player3 = new Player("player3");
  a.Shuffle();
  // a.BbuckShuffle(); // �� ���� �׽�Ʈ�� ����� ��.

  a.SetGame(player1,player2,player3);
  int moneyPerScore = 0;
  std::cout << ">> preset <<" << std::endl;
  std::cout << "1���� �󸶷� ����Ͻðڽ��ϱ�?(����: ��) : ";
  std::cin >> moneyPerScore;
  std::cout << ">> ���� ����! (1���� " << moneyPerScore << "��) <<" << std::endl;

  // stop �� ���� ���� ���� (�ӽ� �׽�Ʈ)
  while (!a.GetDeck()->empty()) {  // ���� ���� deck empty
    // functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // ����
    // ī�� ����
    std::cout << "������ ī�� ���� : " << a.GetDeck()->size() << std::endl;
    if (!player1->stop() && !player2->stop() && !player3->stop()) {
      a.Run(player1, player2, player3);
      player1->goStop();
    }
    //Sleep(3000);
    if (!player1->stop() && !player2->stop() && !player3->stop()) {
      a.Run(player2, player1, player3);
      player2->goStop();
    }
    //Sleep(3000);
    if (!player1->stop() && !player2->stop() && !player3->stop()) {
      a.Run(player3, player2, player1);
      player3->goStop();
    }
    //Sleep(3000);
    if (player1->stop() || player2->stop() || player3->stop()) break; // �� �� ������ ������ ����
  }
  //int winningScore = std::max(player1->myScore(), player2->myScore());
  
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