#include "cardBuilder.h"
void cardBuilder::reset() {
  card_type_ = 0;
  // 0 => NaN, 1 => 광, 2 => 열끗, 3 => 단, 4 => 피
  card_where_ = 0;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  card_month_ = 0;
  // 1~12의 값. 똥 = 11, 비 = 12
  special_ribbon_ = 0;
  // 홍단 == 1,청단 == 2,초단 == 3, 디폴트0
  is_bgwang_ = false;
  // 비광이면 1(true). 그 외 카드는 0
  is_ssang_p_ = false;
  // 쌍피일시 true
  is_godori_ = false;
  // 고도리 구성요소일시 true
}
cardBuilder& cardBuilder::setType(int cardType) {
  card_type_ = cardType;
  return *this;
}
cardBuilder& cardBuilder::setWhere(int cardWhere) {
  card_where_ = cardWhere;
  return *this;
}
cardBuilder& cardBuilder::setMonth(int cardMonth) {
  card_month_ = cardMonth;
  return *this;
}
cardBuilder& cardBuilder::setRibbon(int cardRibbon) {
  special_ribbon_ = cardRibbon;
  return *this;
}
cardBuilder& cardBuilder::setBgwang() {
  is_bgwang_= true;
  return *this;
}
cardBuilder& cardBuilder::setSsangP() {
  is_ssang_p_ = true;
  return *this;
}
cardBuilder& cardBuilder::setGodori() {
  is_godori_ = true;
  return *this;
}
cardBuilder& cardBuilder::setName(std::string name) {
  name_ = name;
  return *this;
}

Card* cardBuilder::build(){
  Card* cardtore =
      new Card(card_type_, card_where_, card_month_, special_ribbon_,
               is_bgwang_, is_ssang_p_, is_godori_, name_);
  reset();
  return cardtore;
}