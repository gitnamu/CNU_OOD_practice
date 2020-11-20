#include <iostream>

#include "CardBuilder.h"
#include "scoreCalculator.h"
int main() {
  std::cout << "GIT Synchronize Test" << std::endl;
  cardBuilder builder;
  scoreCalculator calculator;
  // �� Test Case: �� ����� 3����, 8������ ���� ���·�(�� 2��)
  //

  Card* newCard1 = builder.setType(2)
                       .setWhere(0)
                       .setMonth(9)
                       .setOrder(1)
                       .setRibbon(0)
                       .build();  // 9��1>������
  // newCard1->printAllData();
  std::vector<Card*> newCardVector;  //�׽�Ʈ�� ����
  Card* testCard01 = builder.setType(1)
                         .setWhere(0)
                         .setMonth(12)
                         .setOrder(1)
                         .setBgwang()
                         .build();  //��
  Card* testCard02 =
      builder.setType(1).setWhere(0).setMonth(11).setOrder(1).build();  //�˱�
  Card* testCard03 =
      builder.setType(1).setWhere(0).setMonth(8).setOrder(1).build();  // 8����
  Card* testCard04 = builder.setType(3)
                         .setWhere(0)
                         .setMonth(4)
                         .setOrder(2)
                         .setRibbon(3)
                         .build();  // 4����(2)
  Card* testCard05 = builder.setType(3)
                         .setWhere(0)
                         .setMonth(5)
                         .setOrder(2)
                         .setRibbon(3)
                         .build();  // 5����(2)
  Card* testCard06 =
      builder.setType(2).setWhere(0).setMonth(12).setOrder(2).build();  // 12��
                                                                        // ����
  Card* testCard07 =
      builder.setType(2).setWhere(0).setMonth(10).setOrder(1).build();  // 10��
                                                                        // ����
  Card* testCard08 =
      builder.setType(2).setWhere(0).setMonth(4).setOrder(1).build();  // 4��
                                                                       // ����
  Card* testCard09 =
      builder.setType(2).setWhere(0).setMonth(2).setOrder(1).build();  // 2��
                                                                       // ����
  Card* testCard10 =
      builder.setType(4).setWhere(0).setMonth(11).setOrder(4).build();  // 11-4
  Card* testCard11 =
      builder.setType(4).setWhere(0).setMonth(10).setOrder(3).build();  // 10-3
  Card* testCard12 =
      builder.setType(4).setWhere(0).setMonth(10).setOrder(4).build();  // 10-4
  Card* testCard13 =
      builder.setType(4).setWhere(0).setMonth(9).setOrder(3).build();  // 9-3
  Card* testCard14 =
      builder.setType(4).setWhere(0).setMonth(9).setOrder(4).build();  // 9-4
  Card* testCard15 = builder.setType(4)
                         .setWhere(0)
                         .setMonth(12)
                         .setOrder(4)
                         .setSsangP()
                         .build();  // 12-4(����)
  Card* testCard16 = builder.setType(4)
                         .setWhere(0)
                         .setMonth(9)
                         .setOrder(1)
                         .setSsangP()
                         .build();  // 9-1(����)
  Card* testCard17 =
      builder.setType(4).setWhere(0).setMonth(6).setOrder(4).build();  // 6-4
  Card* testCard18 =
      builder.setType(4).setWhere(0).setMonth(4).setOrder(4).build();  // 4-4
  Card* testCard19 =
      builder.setType(4).setWhere(0).setMonth(3).setOrder(3).build();  // 3-3
  Card* testCard20 =
      builder.setType(4).setWhere(0).setMonth(11).setOrder(3).build();  // 11-3
  Card* testCard21 =
      builder.setType(4).setWhere(0).setMonth(11).setOrder(2).setSsangP().build();  // 11-2

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
  std::cout << "���� ���� : " << calculator.score(newCardVector) << std::endl;

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
  return 0;
}