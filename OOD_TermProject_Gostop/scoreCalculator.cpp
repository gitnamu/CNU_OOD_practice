#include "scoreCalculator.h"

#include <iostream>
scoreCalculator::scoreCalculator(int score) : score_(score) {}
scoreCalculator::scoreCalculator() : score_(0) {}
int scoreCalculator::score(std::vector<Card*> scoreField, int go) {
  // 각 파라미터 정의 //
  bool Bgwang_included = false;
  int total_gwang = 0;
  int total_yeol = 0;
  int total_ribbon = 0;
  int red_ribbon = 0;   // 홍단
  int blue_ribbon = 0;  // 청단
  int cho_ribbon = 0;   // 초단
  int total_P = 0;
  int total_godori = 0;

  std::vector<Card*>::iterator ptr;
  for (ptr = scoreField.begin(); ptr != scoreField.end(); ++ptr) {
    Card* pickedCard = *ptr;
    // pickedCard->printAllData();
    if (pickedCard->cardType() == 1) total_gwang += 1;
    if (pickedCard->isBgwang() == true) Bgwang_included += 1;
    if (pickedCard->cardType() == 2) total_yeol += 1;
    if (pickedCard->cardType() == 3) {  //단 세기
      total_ribbon += 1;
      switch (pickedCard->specialRibbon()) {
        case 1:
          std::cout << "홍단" << std::endl;
          red_ribbon += 1;
          break;
        case 2:
          std::cout << "청단" << std::endl;
          blue_ribbon += 1;
          break;
        case 3:
          std::cout << "초단" << std::endl;
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
  // 세기 종료, 아래서부터 점수 계산 //
  if (total_gwang >= 3) {        // 광 점수계산 만족
    if (Bgwang_included >= 1) {  // 비광 포함시(-1)
      std::cout << "비광을 감지했습니다." << std::endl;
      score_ += total_gwang;
      score_--;
    } else {  // 비광 미포함
      score_ += total_gwang;
    }
  }
  if (total_yeol >= 5) score_ += (total_yeol - 4); // 열끗 5개이상부터 1점씩
  if (total_ribbon >= 5) score_ += (total_ribbon - 4); // 추가 - 단 5장이상부터 1점씩
  if (red_ribbon == 3) score_ += 3; // 홍단 3장 수집시 3점
  if (blue_ribbon == 3) score_ += 3; // 청단 3장 수집시 3점
  if (cho_ribbon == 3) score_ += 3; // 초단 3장 수집시 3점
  if (total_P >= 10) score_ += (total_P - 9); // 피 10장 수집할때부터 1점씩 추가
  if (total_godori == 3) score_ += 5; // 고도리 수집성공시 5점추가
  std::cout << "광 갯수:" << total_gwang << std::endl;
  std::cout << "열 갯수:" << total_yeol << std::endl;
  std::cout << "단 갯수:" << total_ribbon << std::endl;
  std::cout << "피 갯수:" << total_P << std::endl;
  score_ = goConsider(go, score_);
  return score_;
}
int scoreCalculator::goConsider(int go, int score) { // 고 여부에 따라 점수변경
    if (go < 3) { // 1고 or 2고
    return score + go; // 점수에 고 만큼 더해서 반환
    } else if (go >= 3) { // 3고 이상
      return (score + go) * 2; // 점수에 고 만큼 더하고 두배
    }
}