#include"functions.h"

Functions::Functions() {}

// 먹을 카드 고르기
void Functions::chooseCardToEat(Deck* deck, Player* player,Card* player_ChoosedCard) {
  std::vector<Card*>* sameMonthCards = new std::vector<Card*>;  // 내가 낼 카드와 일치하는 바닥 패 vector
  Card* choosedFloorCard = nullptr;              // 내가 먹으려고 고른 카드

  for (int i = 0; i < deck->GetFloor()->size(); i++) {
    Card* floorCard = deck->GetFloor()->at(i);
    if (player_ChoosedCard->cardMonth() == floorCard->cardMonth()) {
      // 벡터 순회하며 플레이어가 낸 카드와 일치하는 카드 있는지 확인
      sameMonthCards->push_back(floorCard);
      choosedFloorCard = floorCard;
    }
  }
  std::cout <<"[ "<< player_ChoosedCard->isName() << " ] 을(를) 바닥에 내려 놓았습니다!" << std::endl;
  if (sameMonthCards->empty()) {
    std::cout << "그러나 먹을 수 있는 카드가 없습니다..." << std::endl;
    deck->GetFloor()->push_back(player_ChoosedCard);  // 바닥 패에 추가
  } else {
    if (sameMonthCards->size() > 1) {  // 먹을 카드가 여러개인 경우
      std::cout << "다음 중 먹을 카드를 골라 번호를 입력하세요 :" << std::endl;
      for (int i = 0; i < sameMonthCards->size(); i++) {
        std::cout << i << " : " << sameMonthCards->at(i)->isName() << "  ";
      }
      std::cout << std::endl;
      int n;
      std::cin >> n;

      // 범위 밖의 수 입력시 재입력 요청
      while ((n > sameMonthCards->size() - 1) || (n < 0)) {
        std::cout << "잘못된 수 입니다. 몇 번 카드를 낼지 다시 골라주세요 : ";
        std::cin >> n;
      }
      choosedFloorCard = sameMonthCards->at(n);
    }
    // 고른 바닥 패와 내가 낸 패를 내 점수 필드에 추가
   // player->addScoreField(choosedFloorCard);
    player->addScoreField(player_ChoosedCard);
    //std::cout << "[ "<<choosedFloorCard->isName() << " ], [ " << player_ChoosedCard->isName() <<" ] 이(가) 내 score field에 추가 되었습니다!" << std::endl;
  }
}