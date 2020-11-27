#ifndef PLAYER_H
#define PLAYER_H

#include<vector>
#include"Card.h"

class Player {
 public:
  Card* handOut(int n);          // �տ� �ִ� n��° �� ����
  void addScoreField(Card* newCard);  // ī�带 �� ī��迭�� �߰�
  Card* giveCard(Card* looseCard);   // ���濡�� ī�� �ֱ�

  // Getters & Setters
  std::vector<Card*> handField();   // �� �� ��ȯ
  void setHandField(std::vector<Card*> newCard);  // ó�� �����Ҷ� �� �� ���
  std::vector<Card*> scoreField();    // ���ݱ��� �� ī�� ��ȯ
  int go();   // �� go Ƚ�� ��ȯ
  void setGo(int goCount);  // �� go Ƚ�� ����
  bool stop();  // �� stop ���� ��ȯ
  void setStop(bool stop);  // �� stop ���� ����

  private:
   std::vector<Card*> handField_;  // �տ� �ִ� ��
   std::vector<Card*> scoreField_;    // ���� ��
   int go_;        // go Ƚ��
   bool stop_;     // stop ����
};

#endif

