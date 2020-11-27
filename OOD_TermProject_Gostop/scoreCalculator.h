#pragma once
#ifndef SCORECALCULATOR_H
#define SCORECALCULATOR_H
#include "card.h"
#include <vector>
class scoreCalculator {
 public:
  explicit scoreCalculator(int score);
  explicit scoreCalculator();
  int score(std::vector<Card*> scoreField);
 private:
  int score_;
};
#endif
