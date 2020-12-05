#include "Deck.h"

#include <time.h>

#include <iostream>
#define decksize 50

cardBuilder builder;

Card* Card1 =
    builder.setType(1).setWhere(3).setMonth(1).setName("1�� ��").build();
Card* Card2 = builder.setType(3)
                  .setWhere(3)
                  .setMonth(1)
                  .setRibbon(1)
                  .setName("1�� ȫ��")
                  .build();
Card* Card3 =
    builder.setType(4).setWhere(3).setMonth(1).setName("1�� ��").build();
Card* Card4 =
    builder.setType(4).setWhere(3).setMonth(1).setName("1�� ��").build();
Card* Card5 = builder.setType(2)
                  .setWhere(3)
                  .setMonth(2)
                  .setGodori()
                  .setName("2�� ����")
                  .build();
Card* Card6 = builder.setType(3)
                  .setWhere(3)
                  .setMonth(2)
                  .setRibbon(1)
                  .setName("2�� ȫ��")
                  .build();
Card* Card7 =
    builder.setType(4).setWhere(3).setMonth(2).setName("2�� ��").build();
Card* Card8 =
    builder.setType(4).setWhere(3).setMonth(2).setName("2�� ��").build();
Card* Card9 =
    builder.setType(1).setWhere(3).setMonth(3).setName("3�� ��").build();
Card* Card10 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(3)
                   .setRibbon(1)
                   .setName("3�� ȫ��")
                   .build();
Card* Card11 =
    builder.setType(4).setWhere(3).setMonth(3).setName("3�� ��").build();
Card* Card12 =
    builder.setType(4).setWhere(3).setMonth(3).setName("3�� ��").build();
Card* Card13 = builder.setType(2)
                   .setWhere(3)
                   .setMonth(4)
                   .setGodori()
                   .setName("4�� ����")
                   .build();
Card* Card14 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(4)
                   .setRibbon(3)
                   .setName("4�� �ʴ�")
                   .build();
Card* Card15 =
    builder.setType(4).setWhere(3).setMonth(4).setName("4�� ��").build();
Card* Card16 =
    builder.setType(4).setWhere(3).setMonth(4).setName("4�� ��").build();
Card* Card17 =
    builder.setType(2).setWhere(3).setMonth(5).setName("5�� ����").build();
Card* Card18 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(5)
                   .setRibbon(3)
                   .setName("5�� �ʴ�")
                   .build();
Card* Card19 =
    builder.setType(4).setWhere(3).setMonth(5).setName("5�� ��").build();
Card* Card20 =
    builder.setType(4).setWhere(3).setMonth(5).setName("5�� ��").build();
Card* Card21 =
    builder.setType(2).setWhere(3).setMonth(6).setName("6�� ����").build();
Card* Card22 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(6)
                   .setRibbon(2)
                   .setName("6�� û��")
                   .build();
Card* Card23 =
    builder.setType(4).setWhere(3).setMonth(6).setName("6�� ��").build();
Card* Card24 =
    builder.setType(4).setWhere(3).setMonth(6).setName("6�� ��").build();
Card* Card25 = builder.setType(2)
                   .setWhere(3)
                   .setMonth(7)
                   .setName("7�� ����")
                   .build();
Card* Card26 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(7)
                   .setRibbon(3)
                   .setName("7�� �ʴ�")
                   .build();
Card* Card27 =
    builder.setType(4).setWhere(3).setMonth(7).setName("7�� ��").build();
Card* Card28 =
    builder.setType(4).setWhere(3).setMonth(7).setName("7�� ��").build();
Card* Card29 =
    builder.setType(1).setWhere(3).setMonth(8).setName("8�� ��").build();
Card* Card30 = builder.setType(2)
                   .setWhere(3)
                   .setMonth(8)
                   .setGodori()
                   .setName("8�� ����")
                   .build();
Card* Card31 =
    builder.setType(4).setWhere(3).setMonth(8).setName("8�� ��").build();
Card* Card32 =
    builder.setType(4).setWhere(3).setMonth(8).setName("8�� ��").build();
Card* Card33 = builder.setType(4)
                   .setWhere(3)
                   .setMonth(9)
                   .setSsangP()
                   .setName("9�� ����")
                   .build();
Card* Card34 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(9)
                   .setRibbon(2)
                   .setName("9�� û��")
                   .build();
Card* Card35 =
    builder.setType(4).setWhere(3).setMonth(9).setName("9�� ��").build();
Card* Card36 =
    builder.setType(4).setWhere(3).setMonth(9).setName("9�� ��").build();
Card* Card37 =
    builder.setType(2).setWhere(3).setMonth(10).setName("10�� ����").build();
Card* Card38 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(10)
                   .setRibbon(2)
                   .setName("10�� û��")
                   .build();
Card* Card39 =
    builder.setType(4).setWhere(3).setMonth(10).setName("10�� ��").build();
Card* Card40 =
    builder.setType(4).setWhere(3).setMonth(10).setName("10�� ��").build();
Card* Card41 =
    builder.setType(1).setWhere(3).setMonth(11).setName("11�� ��").build();
Card* Card42 = builder.setType(4)
                   .setWhere(3)
                   .setMonth(11)
                   .setSsangP()
                   .setName("11�� ����")
                   .build();
Card* Card43 =
    builder.setType(4).setWhere(3).setMonth(11).setName("11�� ��").build();
Card* Card44 =
    builder.setType(4).setWhere(3).setMonth(11).setName("11�� ��").build();
Card* Card45 = builder.setType(1)
                   .setWhere(3)
                   .setMonth(12)
                   .setBgwang()
                   .setName("12�� ��")
                   .build();
Card* Card46 =
    builder.setType(2).setWhere(3).setMonth(12).setName("12�� ����").build();
Card* Card47 = builder.setType(3)
                   .setWhere(3)
                   .setMonth(12)
                   .setRibbon(3)
                   .setName("12�� �ʴ�")
                   .build();
Card* Card48 = builder.setType(4)
                   .setWhere(3)
                   .setMonth(12)
                   .setSsangP()
                   .setName("12�� ����")
                   .build();
Card* Card49 =
    builder.setType(4).setMonth(0).setSsangP().setName("���ʽ� ����").build();
Card* Card50 =
    builder.setType(4).setMonth(0).setSsangP().setName("���ʽ� ����").build();
Card cardset[50] = {
    *Card1,  *Card2,  *Card3,  *Card4,  *Card5,  *Card6,  *Card7,  *Card8,
    *Card9,  *Card10, *Card11, *Card12, *Card13, *Card14, *Card15, *Card16,
    *Card17, *Card18, *Card19, *Card20, *Card21, *Card22, *Card23, *Card24,
    *Card25, *Card26, *Card27, *Card28, *Card29, *Card30, *Card31, *Card32,
    *Card33, *Card34, *Card35, *Card36, *Card37, *Card38, *Card39, *Card40,
    *Card41, *Card42, *Card43, *Card44, *Card45, *Card46, *Card47, *Card48,
    *Card49, *Card50};

std::vector<Card*>* Deck::GetFloor() { return floor; }
std::stack<Card*>* Deck::GetDeck() { return deck; }
Deck::Deck() : deck(new std::stack<Card*>), floor(new std::vector<Card*>) {}

// �ٴ� �� ���
void Deck::prints() {
  std::cout << std::endl << "----------floor-----------" << std::endl;
  int count = floor->size();
  for (int i = 0; i < count; i++) {
    std::cout << floor->at(i)->isName() << std::endl;
  }
  std::cout << "--------------------------" << std::endl;
}

void Deck::PairCheck(Player* turn, Card* card, Player* other1,
                     Player* other2) {  // card�� floor ¦ �˻�
  int same = 0;
  int arr[3];
  for (int i = 0; i < this->GetFloor()->size(); i++) {
    if (this->GetFloor()->at(i)->cardMonth() == card->cardMonth()) {
      arr[same] = i;
      same++;
    }
  }  // ī��� this->GetFloor()���� �� �˻�
  if (same == 0) {
    std::cout << "[ " << card->isName()
              << " ]��(��) ���� �� �ִ� ī�尡 �����ϴ�. " << std::endl;
    this->GetFloor()->push_back(card);  // floor�� �߰�

  } else if (same == 1) {
    std::cout << "[ " << card->isName()
              << " ]��(��) ���� �� �ִ� ī�尡 1�� �ֽ��ϴ�. " << std::endl;
    turn->addScoreField(card);
    turn->addScoreField(this->GetFloor()->at(arr[0]));
    // turn�÷��̾��� scorefiled�� �߰�

    std::cout << "[ " << card->isName() << " ] �� [ "
              << this->GetFloor()->at(arr[0])->isName() << " ] �� ȹ��"
              << std::endl;

    this->GetFloor()->erase(this->GetFloor()->begin() +
                            arr[0]);  // floor���� ����

  } else if (same == 2) {
    int a;
    std::cout << "[ " << card->isName()
              << " ]��(��) ���� �� �ִ� ī�尡 2���Դϴ�. ( 0, 1 �Է� ���� ) "
              << std::endl;
    std::cout << " 0 : " << this->GetFloor()->at(arr[0])->isName() << std::endl
              << " 1 : " << this->GetFloor()->at(arr[1])->isName() << std::endl;
    std::cin >> a;
    while (a < 0 || a > 1) {
      std::cout << "[ 0 �� 1 �߿� �ٽ� �����ϼ���. ]" << std::endl;
      std::cin >> a;
    }  // �� ���� ī�� �� 1 �� ����
    turn->addScoreField(card);
    turn->addScoreField(this->GetFloor()->at(arr[a]));
    // turn�÷��̾��� scorefiled�� �߰�

    std::cout << "[ " << card->isName() << " ] �� [ "
              << this->GetFloor()->at(arr[a])->isName() << " ] �� ȹ��"
              << std::endl;
    this->GetFloor()->erase(this->GetFloor()->begin() +
                            arr[a]);  // floor���� ����

  } else if (same == 3) {
    std::cout << "[ ���� �Ծ����ϴ�. ! ]" << std::endl;
    turn->addScoreField(card);
    std::cout << "[ " << card->isName() << " ]";
    for (int i = 0; i < 3; i++) {
      turn->addScoreField(this->GetFloor()->at(arr[i]));
      std::cout << " ��  [ " << this->GetFloor()->at(arr[i])->isName() << " ] ";
    }
    std::cout << " �� ȹ��" << std::endl;
    other1->giveCard(turn);
    other2->giveCard(turn);
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
      // this->GetFloor()->erase(this->GetFloor()->begin() + arr[i]);  //
      // floor���� ����
      // this->GetFloor()->erase(this->GetFloor()->begin() +
      //                       arr[0]);  // ���� ���� : �÷ξ� ���� ��ġ����
      //                       ����
      this->GetFloor()->erase(this->GetFloor()->begin() + arr[i] - cnt);
      cnt++;
    }
  }
}

void Deck::Run(Player* turn, Player* other1, Player* other2) {
  std::cout << std::endl
            << std::endl
            << " (test) ������ ī�� �̸����� : "
            << this->GetDeck()->top()->isName()
            << std::endl;  // test�� flipedī�� �̸�����
  std::vector<Card*>* get = new std::vector<Card*>;
  int same = 0;  // Handout�� �п� �ٴ��а� ���� �� count
  int arr1[3];   // ���� ���� index�� ��� ����
  Card* fliped = deck->top();
  deck->pop();

  other1->printMyScoreField();
  other2->printMyScoreField();
  this->prints();
  turn->printMyHandField();
  turn->printMyScoreField();

  // floor�� turn�÷��̾��� �� �п� ���� �и� ����Ѵ�.

  if (!turn->handField()->empty()) {  // ���а� ���� �ʾҴٸ�
    Card* handout = turn->handOut();  // ī�带 �ϳ� �̴´�.
    if (handout->cardMonth() == 0) {
      turn->addScoreField(handout);
      std::cout << "���ʽ� ī�带 �½��ϴ�. ! " << std::endl;
    } else {
      std::cout << "HandOut : " << handout->isName() << std::endl;
      std::cout << "Fliped : " << fliped->isName() << std::endl;
      for (int i = 0; i < floor->size(); i++) {
        if (floor->at(i)->cardMonth() == handout->cardMonth()) {
          arr1[same] = i;
          same++;
        }
      }  // ���� ī�忡 ���� �ٴ��п� �˻�
      if (fliped->cardMonth() ==
          handout->cardMonth()) {  // Special Case�� Handout�� �п� ������ �а�
                                   // ���� �� �߻�
        if (same == 0) {  // ��
          std::cout << "[ �� ]" << std::endl;
          get->push_back(handout);
          get->push_back(fliped);
          other1->giveCard(turn);
          other2->giveCard(turn);
        } else if (same == 1) {  // ��
          std::cout << "[ �� ]" << std::endl;
          floor->push_back(handout);
          floor->push_back(fliped);
          // �ٴڿ� ��Ƶд�.
        } else if (same == 2) {  // ����
          std::cout << "[ ���� ]" << std::endl;
          get->push_back(handout);
          get->push_back(fliped);
          get->push_back(floor->at(arr1[0]));
          get->push_back(floor->at(arr1[1]));
          // 4���� ī�� get�� �ְ�
          floor->erase(floor->begin() + arr1[0]);
          floor->erase(floor->begin() + arr1[1]);
          // 2���� �ٴ��д� vector���� ����
          other1->giveCard(turn);
          other2->giveCard(turn);
        }
        return;  // special case ó�� �� ����
      } else {   // �� �п� ������ �а� �ٸ� ��
        this->PairCheck(turn, handout, other1, other2);
      }  // handout�� �п� �ٴ��п� ���� ó��
    }
  }  // fliped �� �п� �ٴ��п� ���� ó�� ���� ( �� �а� ���� �� ������� )
  while (fliped->cardMonth() == 0) {  // ���ʽ��ǰ� ������
    std::cout << "���ʽ� �� ȹ�� !\n �ٽ� �������ϴ�." << std::endl;
    turn->addScoreField(fliped);
    fliped = deck->top();
    deck->pop();
  }
  this->PairCheck(turn, fliped, other1, other2);
  if (floor->empty()) {  // ���� ���� �� �ٴ��а� ���ٸ� �Ͼ���
    std::cout << "[ �Ͼ��� ! �Ǹ� 1�� �� ��������. ]" << std::endl;
    other1->giveCard(turn);
    other2->giveCard(turn);
  }
  std::cout << std::endl
            << turn->playerName() << " �� ������ ����Ǿ����ϴ�." << std::endl;
  return;
}

// ������ ī�� �迭 �������� ���ÿ� Ǫ��
void Deck::Shuffle() {
  bool test[decksize];
  for (int i = 0; i < decksize; i++) test[i] = false;
  int arr[decksize];
  int count = 0;
  Card* tempCard;
  srand((unsigned int)time(NULL));
  while (count < decksize) {
    int num = rand() % decksize;
    if (test[num] != true) {
      test[num] = true;
      arr[count] = num;
      tempCard = &cardset[num];
      deck->push(tempCard);
      count++;
    }
  }
  if (ShuffleCheck()) {
    this->Shuffle();
  }
}
void Deck::BbuckShuffle() {  // �� �˻縦 ���� �׽�Ʈ�� �Լ�. ī�尡 ������
                             // �������� ����.
  bool test[decksize];
  for (int i = 0; i < decksize; i++) test[i] = false;
  int arr[decksize];
  int count = 0;
  Card* tempCard;
  srand((unsigned int)time(NULL));
  while (count < decksize) {
    int num = rand() % decksize;
    if (test[count] != true) {
      test[count] = true;
      arr[count] = count;
      tempCard = &cardset[count];
      deck->push(tempCard);
      count++;
    }
  }
}
bool Deck::ShuffleCheck() {
  bool check = false;
  Card* a[6];
  int monthcount[12];  // ī�尡 1���̸� 0�� �ε����� , 2���̸� 1�� �ε����� ,,
                       // +1
  for (int i = 0; i < 12; i++) monthcount[i] = 0;  // 0���� �ʱ�ȭ
  for (int i = 0; i < 6; i++) {
    a[i] = this->deck->top();
    deck->pop();
    if (a[i]->cardMonth() != 0) { // ���ʽ��Ǵ� no count
      monthcount[a[i]->cardMonth() - 1]++;
    }
  }  // ������ Ȯ��
  for (int i = 5; i >= 0; i--) {  // �������� ���� ī����� push
    deck->push(a[i]);
  }  // ���� ����ִ´�.

  // �˻�
  for (int i = 0; i < 12; i++) {
    if (monthcount[i] == 4) {               // 4���� �ٴڿ� �򸮸�
      std::cout << "������!" << std::endl;  // ������
      check = true;
      break;  // Ż��
    }
  }
  return check;
}
