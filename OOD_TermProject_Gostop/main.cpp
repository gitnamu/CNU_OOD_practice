#include <iostream>

#include "Deck.h"
#include "player.h"
#include "scoreCalculator.h"
<<<<<<< HEAD
=======
#include "Deck.cpp"
#include"player.h"
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
int main() {
  
  std::cout << "GIT Synchronize Test" << std::endl;
<<<<<<< HEAD
  Deck a; 
=======
  cardBuilder builder;
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12�� ����").build();
  Deck a;
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
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

<<<<<<< HEAD
  // player1 ���� ����
  for (int i = 0; i < 7; i++) {
    player1.setHandField(a.GetDeck()->top());
    std::cout << i << " �� ° player1 �� �� :"
              << player1.handField()->back()->isName()
              << std::endl;  // ������ ���
    a.GetDeck()->pop();
  }

  // player2 ���� ����
  for (int i = 0; i < 7; i++) {
    player2.setHandField(a.GetDeck()->top());
    std::cout << i << " �� ° player2 �� �� :"
              << player2.handField()->back()->isName()
              << std::endl;  // ������ ���
    a.GetDeck()->pop();
  }

=======
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
  // player3 ���� ����
  for (int i = 0; i < 7; i++) {
    player3.setHandField(a.GetDeck()->top());
    std::cout << i << " �� ° player3 �� �� :"
<<<<<<< HEAD
              << player3.handField()->back()->isName()
              << std::endl;  // ������ ���
=======
              << player3.handField()->back()->isName() << std::endl;  // ������ ���
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
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
<<<<<<< HEAD
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

    std::cout << player1.handOut(nthCard)->isName() << std::endl;

    break;  // �̿ϼ��̹Ƿ� �ϴ� ����
=======
    a.prints();  // vector�� ������ ī����� ���
    player1.printMyHandField(); // �� �� �� ���
    int nthCard;
    std::cout << "�� �� ī�带 ���� ����ּ��� : ";
    std::cin >> nthCard;

    // ���� ���� �� �Է½� ���Է� ��û
    while ((nthCard > player1.handField()->size() - 1) || (nthCard < 0)) {
      std::cout << "�߸��� �� �Դϴ�. �� �� ī�带 ���� �ٽ� ����ּ��� : ";
      std::cin >> nthCard;
    }

    std::cout << player1.handOut(nthCard)->isName() << std::endl;
    break;    // �̿ϼ��̹Ƿ� �ϴ� ����
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
  }
  return 0;
}