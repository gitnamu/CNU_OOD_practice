#include <iostream>
#include "CardBuilder.h"
#include "scoreCalculator.h"
#include "Deck.cpp"
#include "player.h"
int main() {
  stack<Card*> GameDeck;
  vector<Card*> GameFloor;
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  scoreCalculator calculator;
  // ±¤ Test Case: ºñ±¤ ÇÑÀå°ú 3¿ù±¤, 8¿ù±¤À» °¡Áø »óÅÂ·Î(±¤ 2Á¡)
  //

  Card* newCard1 = builder.setType(2)
                       .setWhere(0)
                       .setMonth(9)
                       .setRibbon(0)
                       .build();  // 9¿ù1>¿­²ýÇÇ
  // newCard1->printAllData();
  std::vector<Card*> newCardVector;  //Å×½ºÆ®¿ë º¤ÅÍ
  Card* testCard01 = builder.setType(1)
                         .setWhere(0)
                         .setMonth(12)
                         .setBgwang()
                         .build();  //ºñ±¤
  Card* testCard02 =
      builder.setType(1).setWhere(0).setMonth(11).build();  //¶Ë±¤
  Card* testCard03 =
      builder.setType(1).setWhere(0).setMonth(8).build();  // 8¿ù±¤
  Card* testCard04 = builder.setType(3)
                         .setWhere(0)
                         .setMonth(4)
                         .setRibbon(3)
                         .build();  // 4¿ùÃÊ(2)
  Card* testCard05 = builder.setType(3)
                         .setWhere(0)
                         .setMonth(5)
                         .setRibbon(3)
                         .build();  // 5¿ùÃÊ(2)
  Card* testCard06 =
      builder.setType(2).setWhere(0).setMonth(12).build();  // 12¿ù
                                                                        // ¿­²ý
  Card* testCard07 =
      builder.setType(2).setWhere(0).setMonth(10).build();  // 10¿ù
                                                                        // ¿­²ý
  Card* testCard08 =
      builder.setType(2).setWhere(0).setMonth(4).build();  // 4¿ù
                                                                       // ¿­²ý
  Card* testCard09 =
      builder.setType(2).setWhere(0).setMonth(2).build();  // 2¿ù
                                                                       // ¿­²ý
  Card* testCard10 =
      builder.setType(4).setWhere(0).setMonth(11).build();  // 11-4
  Card* testCard11 =
      builder.setType(4).setWhere(0).setMonth(10).build();  // 10-3
  Card* testCard12 =
      builder.setType(4).setWhere(0).setMonth(10).build();  // 10-4
  Card* testCard13 =
      builder.setType(4).setWhere(0).setMonth(9).build();  // 9-3
  Card* testCard14 =
      builder.setType(4).setWhere(0).setMonth(9).build();  // 9-4
  Card* testCard15 = builder.setType(4)
                         .setWhere(0)
                         .setMonth(12)
                         .setSsangP()
                         .build();  // 12-4(½ÖÇÇ)
  Card* testCard16 = builder.setType(4)
                         .setWhere(0)
                         .setMonth(9)
                         .setSsangP()
                         .build();  // 9-1(½ÖÇÇ)
  Card* testCard17 =
      builder.setType(4).setWhere(0).setMonth(6).build();  // 6-4
  Card* testCard18 =
      builder.setType(4).setWhere(0).setMonth(4).build();  // 4-4
  Card* testCard19 =
      builder.setType(4).setWhere(0).setMonth(3).build();  // 3-3
  Card* testCard20 =
      builder.setType(4).setWhere(0).setMonth(11).build();  // 11-3
  Card* testCard21 =
      builder.setType(4).setWhere(0).setMonth(11).setSsangP().build();  // 11-2

  //newCardVector.push_back(newCard1);
  newCardVector.push_back(testCard01);
  newCardVector.push_back(testCard02);
  newCardVector.push_back(testCard03);
  newCardVector.push_back(testCard04);
  newCardVector.push_back(testCard05);
  newCardVector.push_back(testCard06);
  newCardVector.push_back(testCard07);
  newCardVector.push_back(testCard08);
  newCardVector.push_back(testCard09);
  newCardVector.push_back(testCard10);
  newCardVector.push_back(testCard11);
  newCardVector.push_back(testCard12);
  newCardVector.push_back(testCard13);
  newCardVector.push_back(testCard14);
  newCardVector.push_back(testCard15);
  newCardVector.push_back(testCard16);
  newCardVector.push_back(testCard17);
  newCardVector.push_back(testCard18);
  newCardVector.push_back(testCard19);
  newCardVector.push_back(testCard20);
  newCardVector.push_back(testCard21);
  std::cout << "ÃÖÁ¾ Á¡¼ö : " << calculator.score(newCardVector) << std::endl;

    // Tabby Test Area // 

  class testClass {
   public:
    std::vector<Card*>* getVector() { return newvector; }
    void inputElement(Card* carddata) { newvector->push_back(carddata); }
    Card* getElement() { return newvector->at(0); }
   private:
    std::vector<Card*>* newvector = new std::vector<Card*>;
  };

  testClass* newClass = new testClass();
  newClass->inputElement(testCard01);
  newClass->getElement()->printAllData();
  Card* aa =
      builder.setType(2).setWhere(3).setMonth(12).setName("12¿ù ¿­²ý").build();
  Deck a;
  a.Shuffle();
  for (int i = 0; i < 6; i++) {
    a.GetFloor()->push_back(a.GetDeck()->top());
    std::cout << i <<" ¹ø Â° ¹Ù´Ú ÆÐ :" <<a.GetDeck()->top()->isName() <<endl;
    a.GetDeck()->pop();
  }

  a.prints(); // vectorÀÇ ¸¶Áö¸· Ä«µåºÎÅÍ Ãâ·Â

  // YYS Test Area //
  Player* player1 = new Player();
  return 0;
}