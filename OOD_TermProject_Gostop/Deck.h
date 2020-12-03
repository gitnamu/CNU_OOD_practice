#ifndef DECK_H
#define DECK_H

#include <stack>
#include <vector>

#include "cardBuilder.h"
#include "player.h"

class Deck {
 public:
  void prints();   // floor ���
  void Shuffle();  // ī�带 �� ī��迭�� �߰�
  void BbuckShuffle(); // �� �˻縦 ���� ����
  bool ShuffleCheck();  // ������ �� �˻�
  std::vector<Card*>* GetFloor();
  std::stack<Card*>* GetDeck();
  void PairCheck(Player* turn, Card* card, Player* other1,
                 Player* other2);  // turn�÷��̾��� ���� card�� floor ¦ �˻�
  void Run(Player* turn, Player* other1, Player* other2);
  Deck();

 private:
  std::stack<Card*>* deck;
  std::vector<Card*>* floor;
};

#endif