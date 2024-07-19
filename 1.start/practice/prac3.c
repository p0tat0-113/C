#include <stdio.h>

//두 수의 최대 공약수를 구하는 문제
//유클리드 호제법을 사용

//6 % 4 = 2
//4 % 2 = 0
//GCD = 2

int getGCD(int big, int small){//num2가 num1보다 크거가 같아야 함.
    if (small > big){
        int temp = big;
        big = small;
        small = temp;
    }

    while (big%small!=0)
    {
        int temp = small;
        small = big%small;
        big = temp;
    }
    return small;
}

int main(void){
    printf("%d\n",getGCD(21,7));

    return 0;
}

