#include "Card.h"
Card::Card(int type, int where, int month, int specialRibbon,
           bool bgwang, bool ssangp, bool isgodori, std::string name)
    : card_type_(type),
      card_where_(where),
      card_month_(month),
      special_ribbon_(specialRibbon),
      is_bgwang_(bgwang),
      is_ssang_p_(ssangp),
      is_godori_(isgodori),
      name_(name) {}
int Card::cardType() const { return card_type_; }
int Card::cardWhere() const { return card_where_; }
int Card::cardMonth() const { return card_month_; }
int Card::specialRibbon() const { return special_ribbon_; }
bool Card::isBgwang() const { return is_bgwang_; }
bool Card::isSsangP() const { return is_ssang_p_; }
bool Card::isGodori() const { return is_godori_; }
std::string Card::isName() const { return name_; }
void Card::yeolToSsangP(Card* targetCard) {
  bool isYeol = targetCard->cardType() == 2;
  bool isMonth9 = targetCard->cardMonth() == 9;
  if (isYeol && isMonth9) {
    int& temp1 = const_cast<int&>(targetCard->card_type_);
    temp1 = 4;
    bool& temp2 = const_cast<bool&>(targetCard->is_ssang_p_);
    temp2 = true;
    std::cout << "������ ���Ƿ� ����߽��ϴ�." << std::endl;
  } else {
    std::cout << "���� : ���Ƿ� ����� �� ���� ī���Դϴ�." << std::endl;
  }
}
void Card::printAllData() {
  std::cout << "<ī�� ��ü ����>" << std::endl;
  switch (this->cardType()) {
    case 0:
      std::cout << "ī���� : ������" << std::endl;
      break;
    case 1:
      std::cout << "ī���� : ��(1)" << std::endl;
      break;
    case 2:
      std::cout << "ī���� : ����(2)" << std::endl;
      break;
    case 3:
      std::cout << "ī���� : ��(3)" << std::endl;
      break;
    case 4:
      std::cout << "ī���� : ��(4)" << std::endl;
      break;
    default:
      std::cout << "ī���� ����" << std::endl;
      break;
  }
  switch (this->cardWhere()) {
    case 0:
      std::cout << "ī����ġ : ������" << std::endl;
      break;
    case 1:
      std::cout << "ī����ġ : ��(1)" << std::endl;
      break;
    case 2:
      std::cout << "ī����ġ : �ʵ�(2)" << std::endl;
      break;
    case 3:
      std::cout << "ī����ġ : ��(3)" << std::endl;
      break;
    default:
      std::cout << "ī����ġ ����" << std::endl;
      break;
  }
  std::cout << "ī�� �� : " << this->cardMonth() << std::endl;
  switch (this->specialRibbon()) {
    case 0:
      std::cout << "�� ���� : ����" << std::endl;
      break;
    case 1:
      std::cout << "�� ���� : ȫ��(1)" << std::endl;
      break;
    case 2:
      std::cout << "�� ���� : û��(2)" << std::endl;
      break;
    case 3:
      std::cout << "�� ���� : �ʴ�(3)" << std::endl;
      break;
    default:
      std::cout << "ī�� �� ����" << std::endl;
      break;
  }
  std::cout << "�� ���� : " << this->isBgwang() << std::endl;
  std::cout << "���� ���� : " << this->isSsangP() << std::endl;
  std::cout << "���� ���� : " << this->isGodori() << std::endl;
  std::cout << "Called : " << this->isName() << std::endl;
}