#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Card.h"

struct ScoreField {
  std::vector<Card*> myGwang;   // ���� ���� ��
  std::vector<Card*> myRibbon;  // ���� ���� ��
  std::vector<Card*> myYeol;    // ���� ���� ����
  std::vector<Card*> mySsangP;  // ���� ���� ��
  std::vector<Card*> myP;       // ���� ���� ��

  int godori;       // ����
  int red_ribbon;   // ȫ��
  int blue_ribbon;  // �ʴ�
  int cho_ribbon;   // �ʴ�

  ScoreField();
};

class Player {
 public:
  Player(std::string playerName);    // 1���� ������
  Card* handOut();                   // player �� �� �� 1�� ����
  void addScoreField(Card* newCard); // ī�带 �� ī��迭�� �߰�

  bool giveCard(Player* other);      // ���濡�� ī�� �ֱ�
  int myScore(); // �� ����

  void printMyHandField();           // �� �� �� ���
  void printMyScoreField();          // �� �� �� ���
  void goStop();                     // �� , ���� ����
  int myScoreByLoser(Player* other); // ���� �̰����� ���� ������ ����� ����
  bool shakable();                   // ���� �������� ���� Ȯ��

  // Getters & Setters
  std::string playerName();          // �÷��̾� �̸� ��ȯ
  std::vector<Card*>* handField();   // �� �� ��ȯ
  void setHandField(Card* newCard);  // ó�� �����Ҷ� �� �� ���
  struct ScoreField* scoreField();   // ���� ���� �� ��ȯ
  int go();                          // �� go Ƚ�� ��ȯ
  void setGo(int goCount);           // �� go Ƚ�� ����
  int score();                       // �� score ��ȯ
  void setScore(int newscore);       // �� score ����
  bool stop();                       // �� stop ���� ��ȯ
  void setStop(bool stop);           // �� stop ���� ����
  int shake();                       // ���� Ƚ�� ��ȯ

 private:
  Player();                        // ������
  const std::string playerName_;   // �÷��̾� �̸�
  std::vector<Card*> handField_;   // �տ� �ִ� ��
  struct ScoreField scoreField_;   // ���� ���� ��
  int go_ ;                        // go Ƚ��
  int score_;                      // ����
  bool stop_;                      // stop ����
  int shake_;                      // ���� Ƚ��
};

#endif