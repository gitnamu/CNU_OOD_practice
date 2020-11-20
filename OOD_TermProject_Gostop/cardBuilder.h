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
  // 0 => NaN, 1 => 광, 2 => 열끗, 3 => 단, 4 => 피
  int card_where_;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  int card_month_;
  // 1~12의 값. 똥 = 11, 비 = 12
  int card_order_;
  // 표준일러스트 기준 1~4.
  int special_ribbon_ =0;
  // 홍단 == 1,청단 == 2,초단 == 3, 디폴트0
  bool is_bgwang_=0;
  // 비광이면 1(true). 그 외 카드는 0
  bool is_ssang_p_=0;
  // 쌍피일시 true
  bool is_godori_=0;
  // 고도리 구성요소일시 true
};
#endif