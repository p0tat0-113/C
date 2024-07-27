#include <stdio.h>
#include <stdlib.h>

int main(void){
    //0~99까지의 난수를 출력하는 문제.
    //rand()함수는 기본적으로 RAND_MAX 32767까지의 난수를 출력한다.

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",rand()%100);//100으로 나눈 나머지는 절대 99를 넘지 못함.
        //그런데 rand()함수는 seed값이 고정적인지 계속 똑같은 숫자만 나옴.
    }
    
    
    return 0;
}