#include <iostream>

#include "CardBuilder.h"
#include "scoreCalculator.h"
int main() {
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  Card* newCard1 = builder.setType(2)
                       .setWhere(0)
                       .setMonth(9)
                       .setOrder(1)
                       .setRibbon(0)
                       .build();
  newCard1->printAllData();
  return 0;
}