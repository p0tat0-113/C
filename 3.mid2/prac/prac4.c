#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    //srand()함수로 개발자가 직접 시드 값을 넘겨줄 수 있다.
    //이 코드에서는 현재시간을 시드 값으로 사용함.

    int seed = (int)time(NULL);
    srand(seed);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",rand()%100);
    }
    
    return 0;
}