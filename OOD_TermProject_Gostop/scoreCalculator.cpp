#include "scoreCalculator.h"

#include <iostream>

scoreCalculator::scoreCalculator() {}
int scoreCalculator::score(ScoreField* scoreField,int go, int shake) {

  // 각 파라미터 정의 //
  int score = 0;

  bool Bgwang_included = false;
  int total_gwang = static_cast<int>(scoreField->myGwang.size());
  int total_yeol = static_cast<int>(scoreField->myYeol.size());
  int total_ribbon = static_cast<int>(scoreField->myRibbon.size());
  int total_p = static_cast<int>(scoreField->myP.size());                  // 피 개수
  int total_ssnag_p = static_cast<int>(scoreField->mySsangP.size());  // 쌍피 개수
  int red_ribbon = scoreField->red_ribbon;    // 홍단
  int blue_ribbon = scoreField->blue_ribbon;  // 청단
  int cho_ribbon = scoreField->cho_ribbon;    // 초단
  int total_godori = scoreField->godori;      // 고도리

  //  점수 계산 //
  if (total_gwang >= 3) {        // 광 점수계산 만족
    if (Bgwang_included == true) {  // 비광 포함시(-1)
      std::cout << "비광을 감지했습니다." << std::endl;
      score += total_gwang;
      score--;
    } else {  // 비광 미포함
      score += total_gwang;
    }
  }
  if (total_yeol >= 5)    // 열끗 5개이상부터 1점씩
    score += (total_yeol - 4);  
  if (total_ribbon >= 5)  // 추가 - 단 5장이상부터 1점씩
    score += (total_ribbon - 4);     
  if (red_ribbon == 3)    // 홍단 3장 수집시 3점
    score += 3; 
  if (blue_ribbon == 3)   // 청단 3장 수집시 3점
    score += 3; 
  if (cho_ribbon == 3)    // 초단 3장 수집시 3점
    score += 3; 
  if ((total_p + total_ssnag_p * 2) >= 10) // 피 10장 수집할때부터 1점씩 추가
    score += ((total_p + total_ssnag_p * 2) - 9);  
  if (total_godori == 3) // 고도리 수집성공시 5점추가
    score += 5; 

  /*
  std::cout << "광 개수:" << total_gwang << std::endl;
  std::cout << "열 개수:" << total_yeol << std::endl;
  std::cout << "단 개수:" << total_ribbon << std::endl;
  std::cout << "피 개수:" << total_p + total_ssnag_p
            << " (쌍피 개수: " << total_ssnag_p << ")" << std::endl;
*/
  if (score >= 3) {  // go,흔들기 고려한 점수 반영
    score = goConsider(go, score);
    score = shakeConsider(shake, score);
  }
  return score;
}

// 고 여부에 따라 점수변경 (private 함수) 
int scoreCalculator::goConsider(int go, int score) {
  if (go < 3) { // 1고 or 2고
    score += go; // 점수에 고 만큼 더하기
  } else if (go >= 3) {       // 3고 이상
    score = (score + go) * 2;  // 점수에 고 만큼 더하고 두배
  }
  return score;
}

// 흔들기 1회당 점수 2배 (private 함수)
int scoreCalculator::shakeConsider(int shake, int score) {
  if (shake > 0) score =  score * shake * 2;
  return score;
}

// 광박, 피박, 멍박 계산하여 두 명 사이의 점수 차 반환
int scoreCalculator::calcBak(Player* winner, Player* loser) {
  int winnerScore = winner->myScore();                        // Winner 최종 점수
  int loserScore = loser->myScore();                          // Loser 최종 점수
  ScoreField* winnerScoreField = winner->scoreField();    // 이긴사람 scoreField
  ScoreField* loserScoreField = loser->scoreField();      // 진사람 scoreField
  // 이긴사람 피 점수
  int winnerPScore =
      static_cast<int>(winnerScoreField->myP.size() + winnerScoreField->mySsangP.size() * 2);
  // 진 사람 피 점수
  int otherPScore =
      static_cast<int>(loserScoreField->myP.size() + loserScoreField->mySsangP.size() * 2);
  std::cout <<  "[";
  if (winnerScoreField->myGwang.size() >= 3) {    // 광박
    if (loserScoreField->myGwang.size() == 0) {
      winnerScore *= 2;
      std::cout << " 광박 적용 ";
    }
  }
    if (winnerPScore >= 10) {                     // 피박
      if (0 < otherPScore && otherPScore <= 5) {
        winnerScore *= 2;
        std::cout << " 피박 적용 ";
      }
    }
    if (winnerScoreField->myYeol.size() >= 5) {   // 멍박
      if (loserScoreField->myYeol.size() == 0) {
        winnerScore *= 2;
        std::cout << " 멍박 적용 ";
      }
    }
  std::cout << "]" <<std::endl;
  return winnerScore - loserScore;    // Winner점수 - Loser점수 반환
}
