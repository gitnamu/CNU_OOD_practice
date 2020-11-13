#include "cardBuilder.h"
void cardBuilder::reset() {
  card_type_ = 0;
  // 0 => NaN, 1 => ��, 2 => ����, 3 => ��, 4 => ��
  card_where_ = 0;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  card_month_ = 0;
  // 1~12�� ��. �� = 11, �� = 12
  card_order_ = 0;
  // ǥ���Ϸ���Ʈ ���� 1~4.
  special_ribbon_ = 0;
  // ȫ�� == 1,û�� == 2,�ʴ� == 3, ����Ʈ0
  is_bgwang_ = false;
  // ���̸� 1(true). �� �� ī��� 0
  is_ssang_p_ = false;
  // �����Ͻ� true
  is_godori_ = false;
  // ���� ��������Ͻ� true
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
cardBuilder& cardBuilder::setOrder(int cardOrder) {
  card_order_ = cardOrder;
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
cardBuilder& cardBuilder::removeBgwang() {
  is_bgwang_ = false;
  return *this;
}
cardBuilder& cardBuilder::removeSsangP() {
  is_ssang_p_ = false;
  return *this;
}
cardBuilder& cardBuilder::removeGodori() {
  is_godori_ = false;
  return *this;
}
Card* cardBuilder::build(){
  return new Card(card_type_, card_where_, card_month_, card_order_,
                  special_ribbon_, is_bgwang_, is_ssang_p_, is_godori_);
}