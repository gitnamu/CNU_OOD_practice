#pragma once
#ifndef CARD_H
#define CARD_H
class Card {
 public:

 private:
  const int cardType_;
  // 0 => NaN, 1 => ��, 2 => ����, 3 => ��, 4 => ��
  const bool isWhere_;
  // 0 => Error, 1 => on Hands, 2 => on Fields, 3 => in Deck
  const int cardMonth_;
  // 1~12�� ��. �� = 11, �� = 12
  const int cardOrder_;
  // ǥ���Ϸ���Ʈ ���� 1~4.
  const bool isBgwang_;
  // ���̸� 1(true). �� �� ī��� 0
  const int specialRibbon_;
  // ȫ�� == 1,û�� == 2,�ʴ� == 3, ����Ʈ0
  const bool isSsangP_;
  // �����Ͻ� true
  const bool isGodori_;
  // ���� ��������Ͻ� true
};
#endif
