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
    std::cout << "열끗을 쌍피로 사용했습니다." << std::endl;
  } else {
    std::cout << "에러 : 쌍피로 사용할 수 없는 카드입니다." << std::endl;
  }
}
void Card::printAllData() {
  std::cout << "<카드 전체 정보>" << std::endl;
  switch (this->cardType()) {
    case 0:
      std::cout << "카드형 : 미정의" << std::endl;
      break;
    case 1:
      std::cout << "카드형 : 광(1)" << std::endl;
      break;
    case 2:
      std::cout << "카드형 : 열끗(2)" << std::endl;
      break;
    case 3:
      std::cout << "카드형 : 단(3)" << std::endl;
      break;
    case 4:
      std::cout << "카드형 : 피(4)" << std::endl;
      break;
    default:
      std::cout << "카드형 에러" << std::endl;
      break;
  }
  switch (this->cardWhere()) {
    case 0:
      std::cout << "카드위치 : 미정의" << std::endl;
      break;
    case 1:
      std::cout << "카드위치 : 손(1)" << std::endl;
      break;
    case 2:
      std::cout << "카드위치 : 필드(2)" << std::endl;
      break;
    case 3:
      std::cout << "카드위치 : 덱(3)" << std::endl;
      break;
    default:
      std::cout << "카드위치 에러" << std::endl;
      break;
  }
  std::cout << "카드 달 : " << this->cardMonth() << std::endl;
  switch (this->specialRibbon()) {
    case 0:
      std::cout << "단 여부 : 없음" << std::endl;
      break;
    case 1:
      std::cout << "단 여부 : 홍단(1)" << std::endl;
      break;
    case 2:
      std::cout << "단 여부 : 청단(2)" << std::endl;
      break;
    case 3:
      std::cout << "단 여부 : 초단(3)" << std::endl;
      break;
    default:
      std::cout << "카드 단 에러" << std::endl;
      break;
  }
  std::cout << "비광 여부 : " << this->isBgwang() << std::endl;
  std::cout << "쌍피 여부 : " << this->isSsangP() << std::endl;
  std::cout << "고도리 여부 : " << this->isGodori() << std::endl;
  std::cout << "Called : " << this->isName() << std::endl;
}