#include "player.h"

#include <iostream>

#include "scoreCalculator.h"

scoreCalculator scoreC = scoreCalculator::scoreCalculator();  // ScoreCalculator ��ü ����

ScoreField::ScoreField() : blue_ribbon(0), red_ribbon(0), cho_ribbon(0), godori(0){}

Player::Player(std::string playerName)
    : playerName_(playerName), go_(0), stop_(0), score_(0), shake_(0) {
  scoreField_ = ScoreField::ScoreField();
}
bool Player::shakable() {}
    // �տ� �ִ� n��° �� ����
Card* Player::handOut() {
  if (this->handField()->empty()) {  // �� �а� ���� �� nullptr�� ��ȯ�Ͽ� �����⸸
    std::cout << "�� �а� ��� �����Ǿ����ϴ�. �и� ����������. " << std::endl;
    return nullptr;
  }
  int nthCard;
  std::cout << "�� �� ī�带 ���� ����ּ��� : ";
  std::cin >> nthCard;
  // ���� ���� �� �Է½� ���Է� ��û
  while ((nthCard > this->handField()->size() - 1) || (nthCard < 0)) {
    std::cout << "�߸��� �� �Դϴ�. �� �� ī�带 ���� �ٽ� ����ּ��� : ";
    std::cin >> nthCard;
  }

  std::vector<Card*>::iterator iter = handField()->begin();
  iter += nthCard;
  Card* outCard = this->handField()->at(nthCard);
  this->handField()->erase(iter);
  return outCard;
}

// ī�带 �� ī��迭�� �߰�
void Player::addScoreField(Card* newCard) {
  int cardType = newCard->cardType();
  switch (cardType) {
    case 1:   // ��
      this->scoreField()->myGwang.push_back(newCard);
      break;
    case 2:   // ����
      this->scoreField()->myYeol.push_back(newCard);
      if (newCard->isGodori()) this->scoreField()->godori++;
      break;
    case 3:   // ��
      this->scoreField()->myRibbon.push_back(newCard);
      if (newCard->specialRibbon() == 1) {          // ȫ���̸� red_ribbon++
        this->scoreField()->red_ribbon++;
      }
      else if (newCard->specialRibbon() == 2) {   // û���̸� blue_ribbon++
        this->scoreField()->blue_ribbon++;
      }
      else if (newCard->specialRibbon() == 3) {   // �ʴ��̸� cho_ribbon++
        this->scoreField()->cho_ribbon++;
      }
      break;
    case 4:   // ��
      if (newCard->isSsangP()) {  // ����
        this->scoreField()->mySsangP.push_back(newCard);
      }
      else {  // �׳� ��
        this->scoreField()->myP.push_back(newCard);
      }
      break;
    default:
      std::cout << "error" << std::endl;
      break;
  }
}

// ���濡�� �� ���� �ֱ�
bool Player::giveCard(Player* other) {
  size_t myPSize = this->scoreField()->myP.size();
  size_t mySsangPSize = this->scoreField()->mySsangP.size();
  Card* losingCard;

  if (myPSize > 0) {  // �� ������ �� �ֱ�
    losingCard = this->scoreField()->myP.back();
    this->scoreField()->myP.pop_back();
    other->scoreField()->myP.push_back(losingCard);
  }
  else if (mySsangPSize > 0) {  // ���� ������ ���� �ֱ�
    losingCard = this->scoreField()->mySsangP.back();
    this->scoreField()->mySsangP.pop_back();
    other->scoreField()->mySsangP.push_back(losingCard);
  } 
  else {    // �ƹ��͵� ������ false ��ȯ
    std::cout << this->playerName() << "��(��) �� �ǰ� �����ϴ�. " << std::endl;
    return false;
  }

  // ����ٴ� ���� ��� �� true ��ȯ
  std::cout << this->playerName() << "��(��) " << other->playerName() << "���� "
            << losingCard->isName() << "�� ������ϴ�." << std::endl;
  return true;
}

void Player::goStop() {
  int sco = this->myScore();
  if ((sco < 3) || !(this->score() < sco)) {  // 3 �����ϰų� ���� ������ �� ������ ������ ������
    return;  // ����
  } else {
    this->setScore(sco);
    int choice;
    std::cout << " ������ �����մϴ�! 0�� 1�� �Է����ּ���." << std::endl;
    std::cout << " ��  ( 0 )   ���� ( 1 ) " << std::endl;
    std::cin >> choice;
    while (choice < 0 || choice > 1) {
      std::cout << "! �� ( 0 ) ���� ( 1 ) �߿� �������ּ���. " << std::endl;
      std::cin >> choice;
    }
    if (choice == 1) {
      this->setStop(true);
      std::cout << this->playerName() << "��(��) �����Ͽ����ϴ� !" << std::endl;
    } else {
      this->setGo(this->go() + 1);
      std::cout << this->playerName() << " " << this->go() << " �� !" << std::endl;
    }
  }
  return;
}
// �� ���� ��ȯ
int Player::myScore() {
  int score = scoreC.score(Player::scoreField(), this->go(), this->shake());
  return score;
}

// �� �� ���
void Player::printMyScoreField() {
  std::cout << "[ " << this->playerName() << " ���� ���� �� ]" ;
  size_t size = this->scoreField()->myGwang.size();
  if (size > 0) {
    std::cout <<std::endl<< "�� : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myGwang.at(i)->isName() << " ";
    }
  }
  size = this->scoreField()->myYeol.size();
  if (size > 0) {
    std::cout << std::endl << "���� : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myYeol.at(i)->isName() << " ";
    }
  }
  size = this->scoreField()->myRibbon.size();
  if (size > 0) {
    std::cout << std::endl << "�� : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myRibbon.at(i)->isName() << " ";
    }
  }
  size = this->scoreField()->mySsangP.size() +
         this->scoreField()->myP.size();  // ���� + �� ����
  if (size > 0) {
    size = this->scoreField()->mySsangP.size();
    std::cout << std::endl << "�� : ";
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->mySsangP.at(i)->isName() << " ";
    }
    size = this->scoreField()->myP.size();  // �׳� ��
    for (int i = 0; i < size; i++) {
      std::cout << this->scoreField()->myP.at(i)->isName() << " ";
    }
  }

  
  std::cout << std::endl;
}

  // �� �� �� ���
void Player::printMyHandField() {
  if (this->handField()->empty()) {
    return;
  }
  std::cout << "[ " << this->playerName() << " ���� �� ]" << std::endl;
  size_t size = this->handField()->size();
  for (int i = 0; i < size; i++) {
    std::cout << "  -------------";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  |     " << i << "     |";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  |-----------|";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  |";
    std::cout.width(10);
    std::cout << this->handField()->at(i)->isName() << " |";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "  -------------";
  }
  std::cout << std::endl;
}

// ���� �̰����� ���� ������ ����� ����
int Player::myScoreByLoser(Player* other) {
  return scoreC.calcBak(this, other); 
}

// Getters & Setters
// �÷��̾� �̸� ��ȯ
std::string Player::playerName() { return this->playerName_; }

// �� �� ��ȯ
std::vector<Card*>* Player::handField() { return &this->handField_; }

// ó�� �����Ҷ� �� �� ���
void Player::setHandField(Card* newCard) {
  this->handField()->push_back(newCard);
}

// ���� ���� �� ��ȯ
ScoreField* Player::scoreField() { return &this->scoreField_; }

// �� go Ƚ�� ��ȯ vector ��ȯ
int Player::go() { return this->go_; }

// �� go Ƚ�� ����
void Player::setGo(int goCount) { this->go_ = goCount; }

// �� go Ƚ�� ��ȯ
int Player::score() { return this->score_; }

// �� go Ƚ�� ����
void Player::setScore(int newscore) { this->score_ = newscore; }

// �� stop ���� ��ȯ
bool Player::stop() { return this->stop_; }

// �� stop ���� ����
void Player::setStop(bool stop) { this->stop_ = stop; }

// ���� Ƚ�� ��ȯ
int Player::shake() { return this->shake_; }