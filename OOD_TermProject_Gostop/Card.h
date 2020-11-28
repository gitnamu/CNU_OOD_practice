#pragma once
#include <string>
#ifndef CARD_H
#define CARD_H
#include <iostream>
class Card {
 public:
  explicit Card(int type, int where, int month, int specialRibbon, bool bgwang,
                bool ssangp, bool isgodori, std::string name);
  int cardType() const;
  int cardWhere() const;
  int cardMonth() const;
  int specialRibbon() const;
  bool isBgwang() const;
  bool isSsangP() const;
  bool isGodori() const;
  std::string isName() const;
  void yeolToSsangP(Card* targetCard);
  void printAllData();

 private:
  const int card_type_;
  // 0 => NaN, 1 => 광, 2 => 열끗, 3 => 단, 4 => 피
  const int card_where_;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  const int card_month_;
  // 1~12의 값. 똥 = 11, 비 = 12
  const int special_ribbon_;
  // 홍단 == 1,청단 == 2,초단 == 3, 디폴트0
  const bool is_bgwang_;
  // 비광이면 1(true). 그 외 카드는 0
  const bool is_ssang_p_;
  // 쌍피일시 true
  const bool is_godori_;
  // 고도리 구성요소일시 true
  const std::string name_;

  // friend cardBuilder;
};
#endif