#include <stdio.h>

int main(void) {
    //정수의 승격에 의한 묵시적 형변환

    //CPU에서 연산을 하기에 가장 빠른 타입이 int형이기 때문에 int보다 작은 크기의 정수형 데이터는 int형으로 형변환 돼서 계산된다.

    short num1 = 10;
    short num2 = 10;

    printf("%d\n",sizeof(num1+num2));//int형으로 형변환 돼서 계산되는 것을 확인할 수 있음.

    short result = num1 + num2;//int형으로 완료된 계산이 다시 short형으로 묵시적 형변환이 이루어진다.

    return 0;
}