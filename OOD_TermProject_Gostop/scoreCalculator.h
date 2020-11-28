#pragma once
#ifndef SCORECALCULATOR_H
#define SCORECALCULATOR_H
#include <vector>

#include "card.h"
class scoreCalculator {
 public:
  explicit scoreCalculator(int score);
  explicit scoreCalculator();
  int score(std::vector<Card*> scoreField);
<<<<<<< HEAD

=======
>>>>>>> e773701bbe1edb004a51c8e27c296fe301968bc3
 private:
  int score_;
};
#endif