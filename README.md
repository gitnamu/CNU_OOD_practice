1점 당 배율을 정한다. ( 원 )

각 플레이어는 자신의 턴에서 손 패를 한 장 꺼내고 ( 0 ~ n 입력으로 선택 ) 한 장 뒤집어 짝패를 검사한다.
   - 보너스 피를 낼 때는 뒤집어서 손 패로 한 장 가져오고, 다시 선택
   - 보너스 피를 뒤집을 때는 한 장을 더 뒤집는다.
   - 한 장의 카드로 먹을 수 있는 패가 2장이면 0 , 1 을 입력하여 두 장의 카드 중 하나를 선택하여 가져간다.
   
짝패를 검사하는 단계가 끝날 때마다 점수를 계산한다.
3점을 넘었고 이전 턴보다 점수가 올랐을 때 고와 스톱을 결정한다. 0 과 1 로 선택

플레이어 중 스톱을 하거나( -> 승리 ), 뒤집을 카드가 없다면( -> 무승부 ) 게임은 종료된다.

무승부로 종료되지 않았다면 각 플레이어의 피박, 광박, 고박, 점당 배율을 계산하여 패자가 내야할 금액을 출력한다.
