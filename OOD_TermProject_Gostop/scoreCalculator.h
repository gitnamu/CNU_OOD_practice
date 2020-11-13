#pragma once
#ifndef SCORECALCULATOR_H
#define SCORECALCULATOR_H
#include "card.h"
#include <vector>
class scoreCalculator {
 public:
  explicit scoreCalculator(int score);
  explicit scoreCalculator();
  int score();
 private:
  int score_;
};
#endif
