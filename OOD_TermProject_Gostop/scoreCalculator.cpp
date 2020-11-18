#include "scoreCalculator.h"
scoreCalculator::scoreCalculator(int score):score_(score) {}
scoreCalculator::scoreCalculator() : score_(0) {}
int scoreCalculator::score(std::vector<Card>& scoreField) { return score_; }