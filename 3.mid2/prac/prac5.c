#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printResult(int win, int draw){
    printf("게임의 결과 %d승 %d무", win, draw);
}

int main(void){
    //간단한 가위바위보 게임

    char * list[3] = {"바위","가위","보"};//문자열 리터럴은 주소값을 반환함. 배열의 각 요소인 char형 포인터 변수가 이것을 담는다.
    char * winningList[3] = {"가위","보","바위"};//같은 인덱스의 상극

    srand((int)time(NULL));

    int win = 0;
    int draw = 0;

    while (1)
    {
        printf("바위는 1, 가위는 2, 보는 3: ");

        int player;
        scanf("%d", &player);

        int computer  = rand()%3+1;

        printf("당신은 %s선택, 컴퓨터는 %s 선택, ",list[player-1],list[computer-1]);

        if (winningList[player-1] == list[computer -1])//내가 고른 픽의 상극이 컴퓨터가 낸 것과 동일한지 비교
        {
            printf("당신이 이겼습니다!\n");
            win++;
        } else if (player == computer)//무승부인지 비교
        {
            printf("무승부입니다.\n");
            draw++;
        } else{
            printf("졌습니다....\n");
            printResult(win,draw);
            break;
        }        
        
    }
    

    return 0;
}