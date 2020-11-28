#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>

#include"player.h"
#include"Deck.h"

class Functions {
 public:
  void chooseCardToEat(Deck* deck, Player* player, Card* player_ChoosedCard);
  //static Functions* GetInstance();
  Functions();
 private:
  
 // static Functions* instance_;
};

#endif