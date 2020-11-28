#include "scoreCalculator.h"

#include <iostream>
scoreCalculator::scoreCalculator(int score) : score_(score) {}
scoreCalculator::scoreCalculator() : score_(0) {}
int scoreCalculator::score(std::vector<Card*> scoreField) {
  // �� �Ķ���� ���� //
  bool Bgwang_included = false;
  int total_gwang = 0;
  int total_yeol = 0;
  int total_ribbon = 0;
  int red_ribbon = 0;   // ȫ��
  int blue_ribbon = 0;  // û��
  int cho_ribbon = 0;   // �ʴ�
  int total_P = 0;
  int total_godori = 0;

  std::vector<Card*>::iterator ptr;
  for (ptr = scoreField.begin(); ptr != scoreField.end(); ++ptr) {
    Card* pickedCard = *ptr;
    // pickedCard->printAllData();
    if (pickedCard->cardType() == 1) total_gwang += 1;
    if (pickedCard->isBgwang() == true) Bgwang_included += 1;
    if (pickedCard->cardType() == 2) total_yeol += 1;
    if (pickedCard->cardType() == 3) {  //�� ����
      total_ribbon += 1;
      switch (pickedCard->specialRibbon()) {
        case 1:
          std::cout << "ȫ��" << std::endl;
          red_ribbon += 1;
          break;
        case 2:
          std::cout << "û��" << std::endl;
          blue_ribbon += 1;
          break;
        case 3:
          std::cout << "�ʴ�" << std::endl;
          cho_ribbon += 1;
          break;
        default:
          std::cout << "FATAL ERROR : UNDEFINED RIBBON TYPE" << std::endl;
          break;
      }
    }
    if (pickedCard->cardType() == 4) total_P += 1;
    if (pickedCard->cardType() == 4 && pickedCard->isSsangP() == 1)
      total_P += 1;
    if (pickedCard->isGodori() == true) total_godori += 1;
  }
  // ���� ����, �Ʒ������� ���� ��� //
  if (total_gwang >= 3) {        // �� ������� ����
    if (Bgwang_included >= 1) {  // �� ���Խ�(-1)
      std::cout << "���� �����߽��ϴ�." << std::endl;
      score_ += total_gwang;
      score_--;
    } else {  // �� ������
      score_ += total_gwang;
    }
  }
  if (total_yeol >= 5) score_ += (total_yeol - 4);
  if (red_ribbon == 3) score_ += 3;
  if (blue_ribbon == 3) score_ += 3;
  if (cho_ribbon == 3) score_ += 3;
  if (total_P >= 10) score_ += (total_P - 9);
  if (total_godori == 3) score_ += 5;
  std::cout << "�� ����:" << total_gwang << std::endl;
  std::cout << "�� ����:" << total_yeol << std::endl;
  std::cout << "�� ����:" << total_ribbon << std::endl;
  std::cout << "�� ����:" << total_P << std::endl;

  return score_;
}