#pragma once
#ifndef SCORECALCULATOR_H
#define SCORECALCULATOR_H
#include <vector>

#include "card.h"
#include"player.h"
class scoreCalculator {
 public:
  //explicit scoreCalculator(int score);
  scoreCalculator();
  int score(ScoreField* scoreField, int go, int shake);
  int calcBak(Player* winner, Player* loser);

 private:
  int goConsider(int go, int score);
  int shakeConsider(int shake, int score);
};
#endif