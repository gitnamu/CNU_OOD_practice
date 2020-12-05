#include "scoreCalculator.h"

#include <iostream>

scoreCalculator::scoreCalculator() {}
int scoreCalculator::score(ScoreField* scoreField,int go, int shake) {

  // �� �Ķ���� ���� //
  int score = 0;

  bool Bgwang_included = false;
  int total_gwang = static_cast<int>(scoreField->myGwang.size());
  int total_yeol = static_cast<int>(scoreField->myYeol.size());
  int total_ribbon = static_cast<int>(scoreField->myRibbon.size());
  int total_p = static_cast<int>(scoreField->myP.size());                  // �� ����
  int total_ssnag_p = static_cast<int>(scoreField->mySsangP.size());  // ���� ����
  int red_ribbon = scoreField->red_ribbon;    // ȫ��
  int blue_ribbon = scoreField->blue_ribbon;  // û��
  int cho_ribbon = scoreField->cho_ribbon;    // �ʴ�
  int total_godori = scoreField->godori;      // ����

  //  ���� ��� //
  if (total_gwang >= 3) {        // �� ������� ����
    if (Bgwang_included == true) {  // �� ���Խ�(-1)
      std::cout << "���� �����߽��ϴ�." << std::endl;
      score += total_gwang;
      score--;
    } else {  // �� ������
      score += total_gwang;
    }
  }
  if (total_yeol >= 5)    // ���� 5���̻���� 1����
    score += (total_yeol - 4);  
  if (total_ribbon >= 5)  // �߰� - �� 5���̻���� 1����
    score += (total_ribbon - 4);     
  if (red_ribbon == 3)    // ȫ�� 3�� ������ 3��
    score += 3; 
  if (blue_ribbon == 3)   // û�� 3�� ������ 3��
    score += 3; 
  if (cho_ribbon == 3)    // �ʴ� 3�� ������ 3��
    score += 3; 
  if ((total_p + total_ssnag_p * 2) >= 10) // �� 10�� �����Ҷ����� 1���� �߰�
    score += ((total_p + total_ssnag_p * 2) - 9);  
  if (total_godori == 3) // ���� ���������� 5���߰�
    score += 5; 

  /*
  std::cout << "�� ����:" << total_gwang << std::endl;
  std::cout << "�� ����:" << total_yeol << std::endl;
  std::cout << "�� ����:" << total_ribbon << std::endl;
  std::cout << "�� ����:" << total_p + total_ssnag_p
            << " (���� ����: " << total_ssnag_p << ")" << std::endl;
*/
  if (score >= 3) {  // go,���� ����� ���� �ݿ�
    score = goConsider(go, score);
    score = shakeConsider(shake, score);
  }
  return score;
}

// �� ���ο� ���� �������� (private �Լ�) 
int scoreCalculator::goConsider(int go, int score) {
  if (go < 3) { // 1�� or 2��
    score += go; // ������ �� ��ŭ ���ϱ�
  } else if (go >= 3) {       // 3�� �̻�
    score = (score + go) * 2;  // ������ �� ��ŭ ���ϰ� �ι�
  }
  return score;
}

// ���� 1ȸ�� ���� 2�� (private �Լ�)
int scoreCalculator::shakeConsider(int shake, int score) {
  if (shake > 0) score =  score * shake * 2;
  return score;
}

// ����, �ǹ�, �۹� ����Ͽ� �� �� ������ ���� �� ��ȯ
int scoreCalculator::calcBak(Player* winner, Player* loser) {
  int winnerScore = winner->myScore();                        // Winner ���� ����
  int loserScore = loser->myScore();                          // Loser ���� ����
  ScoreField* winnerScoreField = winner->scoreField();    // �̱��� scoreField
  ScoreField* loserScoreField = loser->scoreField();      // ����� scoreField
  // �̱��� �� ����
  int winnerPScore =
      static_cast<int>(winnerScoreField->myP.size() + winnerScoreField->mySsangP.size() * 2);
  // �� ��� �� ����
  int otherPScore =
      static_cast<int>(loserScoreField->myP.size() + loserScoreField->mySsangP.size() * 2);
  std::cout <<  "[";
  if (winnerScoreField->myGwang.size() >= 3) {    // ����
    if (loserScoreField->myGwang.size() == 0) {
      winnerScore *= 2;
      std::cout << " ���� ���� ";
    }
  }
    if (winnerPScore >= 10) {                     // �ǹ�
      if (0 < otherPScore && otherPScore <= 5) {
        winnerScore *= 2;
        std::cout << " �ǹ� ���� ";
      }
    }
    if (winnerScoreField->myYeol.size() >= 5) {   // �۹�
      if (loserScoreField->myYeol.size() == 0) {
        winnerScore *= 2;
        std::cout << " �۹� ���� ";
      }
    }
  std::cout << "]" <<std::endl;
  return winnerScore - loserScore;    // Winner���� - Loser���� ��ȯ
}
