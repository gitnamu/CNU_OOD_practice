#include <iostream>

#include"functions.h"
#include "scoreCalculator.h"

int main() {
  
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12�� ����").build();
  Deck a;
  // Funtion ��ü ���� (Singleton)
  Functions* functions = new Functions();
  // �÷��̾� ��ü�� ����
  Player player1 = Player::Player("player1");
  Player player2 = Player::Player("player2");
  Player player3 = Player::Player("player3");
  a.Shuffle();
  
  // player1 ���� ����
  for (int i = 0; i < 7; i++) {
    player1.setHandField(a.GetDeck()->top());
    std::cout << i << " �� ° player1 �� �� :" << player1.handField()->back()->isName() << std::endl; // ������ ���
    a.GetDeck()->pop();
  }

  // player2 ���� ����
  for (int i = 0; i < 7; i++) {
    player2.setHandField(a.GetDeck()->top());
    std::cout << i << " �� ° player2 �� �� :"
              << player2.handField()->back()->isName() << std::endl;  // ������ ���
    a.GetDeck()->pop();
  }

  // player3 ���� ����
  for (int i = 0; i < 7; i++) {
    player3.setHandField(a.GetDeck()->top());
    std::cout << i << " �� ° player3 �� �� :"
              << player3.handField()->back()->isName() << std::endl;  // ������ ���
    a.GetDeck()->pop();
  }

  // �ٴ� �� ����
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    std::cout << i << " �� ° �ٴ� �� :" << a.GetDeck()->top()->isName()
              << std::endl;
    a.GetDeck()->pop();
  }

  // stop �� ���� ���� ���� (�ӽ� �׽�Ʈ)
  while (!player1.stop() && !player2.stop() && !player3.stop()) {
    a.prints();                  // vector�� ������ ī����� ���
    player1.printMyHandField();  // �� �� �� ���
    int nthCard;
    std::cout << "�� �� ī�带 ���� ����ּ��� : ";
    std::cin >> nthCard;

    // ���� ���� �� �Է½� ���Է� ��û
    while ((nthCard > player1.handField()->size() - 1) || (nthCard < 0)) {
      std::cout << "�߸��� �� �Դϴ�. �� �� ī�带 ���� �ٽ� ����ּ��� : ";
      std::cin >> nthCard;
    }

    Card* player1_ChoosedCard = player1.handOut(nthCard);           // ���� �� ī��
    functions->chooseCardToEat(&a, &player1, player1_ChoosedCard);  // ���� ī�� ����
    Card* openedDeckCard = a.GetDeck()->top();                      // ������ ī�� ���� ������
    a.GetDeck()->pop();                                             // ���� ī�� ������ pop
    std::cout << "������ ī�带 ������ ";
    functions->chooseCardToEat(&a, &player1, openedDeckCard);       // ������ ī��� �ٴ��� �� �� ������ ����
    
  }
  return 0;
}