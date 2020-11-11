#pragma once
#ifndef CARD_H
#define CARD_H
class Card {
 public:

 private:
  const int cardType_;
  // 0 => NaN, 1 => 광, 2 => 열끗, 3 => 단, 4 => 피
  const bool isWhere_;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  const int cardMonth_;
  // 1~12의 값. 똥 = 11, 비 = 12
  const int cardOrder_;
  // 표준일러스트 기준 1~4.
  const bool isBgwang_;
  // 비광이면 1(true). 그 외 카드는 0
  const int specialRibbon_;
  // 홍단 == 1,청단 == 2,초단 == 3, 디폴트0
  const bool isSsangP_;
  // 쌍피일시 true
  const bool isGodori_;
  // 고도리 구성요소일시 true
};
#endif
