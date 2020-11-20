#pragma once
#ifndef CARD_H
#define CARD_H
#include <iostream>
class Card {
 public:
  explicit Card(int type, int where, int month, int order, 
	  int specialRibbon, bool bgwang, bool ssangp, bool isgodori);
  int cardType() const;
  int cardWhere() const;
  int cardMonth() const;
  int cardOrder() const;
  int specialRibbon() const;
  bool isBgwang() const;
  bool isSsangP() const;
  bool isGodori() const;
  void yeolToSsangP(Card* targetCard);
  void printAllData();


 private:
  const int card_type_;
  // 0 => NaN, 1 => ��, 2 => ����, 3 => ��, 4 => ��
  const int card_where_;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  const int card_month_;
  // 1~12�� ��. �� = 11, �� = 12
  const int card_order_;
  // ǥ���Ϸ���Ʈ ���� 1~4.
  const int special_ribbon_;
  // ȫ�� == 1,û�� == 2,�ʴ� == 3, ����Ʈ0
  const bool is_bgwang_;
  // ���̸� 1(true). �� �� ī��� 0
  const bool is_ssang_p_;
  // �����Ͻ� true
  const bool is_godori_;
  // ���� ��������Ͻ� true

  //friend cardBuilder;
};
#endif
