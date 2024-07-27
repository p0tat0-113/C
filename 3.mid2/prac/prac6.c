#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isIn(int arr[], int num){
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == num)
        {
            return 0;//배열에 있으면 0반환
        }
    }
    return -1;//배열에 없으면 -1반환
}

int isStrike(int arr[], int num, int index){
    if (arr[index] == num)
    {
        return 1;//배열에 있고, 인덱스까지 동일하면 1반환
    } else {
        return isIn(arr,num);
    }
}

void getRandomNums(int arr[]){
    srand((int)time(NULL));
    int count = 0;

    while (count < 3)
    {
        int num = rand()%10;
        if (isIn(arr, num) != 0)
        {
            arr[count++] = num;
        } 
    }
}

int main(void) {

    int arr[3] = {-1,-1,-1};
    getRandomNums(arr);

    int count = 0;
    while (1)
    {
        int arrNums[3];
        int strike = 0;
        int ball = 0;
        int out = 0;

        printf("3개의 숫자 선택: ");
        scanf("%d %d %d",&arrNums[0],&arrNums[1],&arrNums[2]);

        for (int i = 0; i < 3; i++)
        {
            if (isStrike(arr,arrNums[i],i) == 1)
            {
                strike++;
            } else if (isStrike(arr,arrNums[i],i) == 0)
            {
                ball++;
            } else {
                out++;
            } 
        }
        
        printf("%d 스트라이크, %d 볼, %d 아웃\n", strike,ball,out);

        if (strike == 3)
        {
            break;
        }
        
        
    }

    return 0;
}