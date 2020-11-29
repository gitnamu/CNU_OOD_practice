#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Card.h"

class Player {
 public:
  Card* handOut();               // player �� �� �� 1�� ����
  void addScoreField(Card* newCard);  // ī�带 �� ī��迭�� �߰�

  bool giveCard(Player* other);  // ���濡�� ī�� �ֱ�
  int myScore();                                  // �� ����

  void printMyHandField();         // �� �� �� ���
  void goStop();                   // �� , ���� ����
  Player(std::string playerName);  // 1���� ������

  // Getters & Setters
  std::string playerName();          // �÷��̾� �̸� ��ȯ
  std::vector<Card*>* handField();   // �� �� ��ȯ
  void setHandField(Card* newCard);  // ó�� �����Ҷ� �� �� ���
  std::vector<Card*>* scoreField();  // ���ݱ��� �� ī�� ��ȯ
  int go();                          // �� go Ƚ�� ��ȯ
  void setGo(int goCount);           // �� go Ƚ�� ����
  int score();                       // �� score ��ȯ
  void setScore(int newscore);       // �� score ����
  bool stop();                       // �� stop ���� ��ȯ
  void setStop(bool stop);           // �� stop ���� ����

 private:
  Player();                        // ������
  const std::string playerName_;   // �÷��̾� �̸�
  std::vector<Card*> handField_;   // �տ� �ִ� ��
  std::vector<Card*> scoreField_;  // ���� ��
  int go_ ;                        // go Ƚ��
  int score_;                      // ����
  bool stop_;                      // stop ����
};

#endif