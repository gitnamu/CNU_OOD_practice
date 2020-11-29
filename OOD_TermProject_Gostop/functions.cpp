#include"functions.h"

Functions::Functions() {}

// ���� ī�� ����
void Functions::chooseCardToEat(Deck* deck, Player* player,Card* player_ChoosedCard) {
  std::vector<Card*>* sameMonthCards = new std::vector<Card*>;  // ���� �� ī��� ��ġ�ϴ� �ٴ� �� vector
  Card* choosedFloorCard = nullptr;              // ���� �������� �� ī��

  for (int i = 0; i < deck->GetFloor()->size(); i++) {
    Card* floorCard = deck->GetFloor()->at(i);
    if (player_ChoosedCard->cardMonth() == floorCard->cardMonth()) {
      // ���� ��ȸ�ϸ� �÷��̾ �� ī��� ��ġ�ϴ� ī�� �ִ��� Ȯ��
      sameMonthCards->push_back(floorCard);
      choosedFloorCard = floorCard;
    }
  }
  std::cout <<"[ "<< player_ChoosedCard->isName() << " ] ��(��) �ٴڿ� ���� ���ҽ��ϴ�!" << std::endl;
  if (sameMonthCards->empty()) {
    std::cout << "�׷��� ���� �� �ִ� ī�尡 �����ϴ�..." << std::endl;
    deck->GetFloor()->push_back(player_ChoosedCard);  // �ٴ� �п� �߰�
  } else {
    if (sameMonthCards->size() > 1) {  // ���� ī�尡 �������� ���
      std::cout << "���� �� ���� ī�带 ��� ��ȣ�� �Է��ϼ��� :" << std::endl;
      for (int i = 0; i < sameMonthCards->size(); i++) {
        std::cout << i << " : " << sameMonthCards->at(i)->isName() << "  ";
      }
      std::cout << std::endl;
      int n;
      std::cin >> n;

      // ���� ���� �� �Է½� ���Է� ��û
      while ((n > sameMonthCards->size() - 1) || (n < 0)) {
        std::cout << "�߸��� �� �Դϴ�. �� �� ī�带 ���� �ٽ� ����ּ��� : ";
        std::cin >> n;
      }
      choosedFloorCard = sameMonthCards->at(n);
    }
    // �� �ٴ� �п� ���� �� �и� �� ���� �ʵ忡 �߰�
   // player->addScoreField(choosedFloorCard);
    player->addScoreField(player_ChoosedCard);
    //std::cout << "[ "<<choosedFloorCard->isName() << " ], [ " << player_ChoosedCard->isName() <<" ] ��(��) �� score field�� �߰� �Ǿ����ϴ�!" << std::endl;
  }
}