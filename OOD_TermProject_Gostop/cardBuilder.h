#pragma once
#ifndef CARDBUILDER_H
#define CARDBUILDER_H
#include "card.h"
class cardBuilder {
 public:
  void reset();
  cardBuilder& setType(int cardType);
  cardBuilder& setWhere(int cardWhere);
  cardBuilder& setMonth(int cardMonth);
  cardBuilder& setOrder(int cardOrder);
  cardBuilder& setRibbon(int cardRibbon);
  cardBuilder& setBgwang();
  cardBuilder& setSsangP();
  cardBuilder& setGodori();

  Card* build();

 private:
  int card_type_;
  // 0 => NaN, 1 => ��, 2 => ����, 3 => ��, 4 => ��
  int card_where_;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  int card_month_;
  // 1~12�� ��. �� = 11, �� = 12
  int card_order_;
  // ǥ���Ϸ���Ʈ ���� 1~4.
  int special_ribbon_ =0;
  // ȫ�� == 1,û�� == 2,�ʴ� == 3, ����Ʈ0
  bool is_bgwang_=0;
  // ���̸� 1(true). �� �� ī��� 0
  bool is_ssang_p_=0;
  // �����Ͻ� true
  bool is_godori_=0;
  // ���� ��������Ͻ� true
};
#endif