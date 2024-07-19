#include <stdio.h>

int main(void) {
    //명시적 형변환

    double result = 3/4; //int형끼리 나누기 때문에 결과도 int형으로 나옴. 즉 0이 나옴. int 0이 double로 묵시적 형변환이 일어남.
    printf("%f\n",result);//0.000000

    //이럴때 명시적으로 형변환하면 된다. 자바에서 하던 것과 똑같음.

    result = (double) 3 / 4;
    printf("%f\n",result);//0.750000

    //int형 3이 double형으로 명시적으로 형변환이 일어남.
    //바로 앞에서 배운 산술연산에서 피연산자간의 타입이 일치하지 않을 경우 묵시적 형변환이 일어나던거 기억하지?
    //int형 4도 double형으로 묵시적으로 형변환이 일어남.
    //그 결과 연산결과도 double형으로 나온다.

    
    return 0;
}