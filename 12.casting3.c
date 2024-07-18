#include <stdio.h>

int main(void) {
    //피연산자 간의 타입 불일치로 인해 일어나는 묵시적 형변환

    //피연산자 간에 자료형이 일치하지 않을 경우 타입을 일치시키기 위해 형변환이 일어난다.
    //이러한 형변환은 데이터의 손실을 최소화 하는 방향으로 일어난다.

    double result = 3.14 + 9; //double과 int를 더함. 이때 소수부의 손실의 최소화 하기 위해 정수인 int는 실수 double로 형변환한다.
    printf("%f\n",result);

    //int  -> long -> long long -> float -> double -> long double
    //형변환 우선순위는 '데이터 손실의 최소화'이다.
    //실수 자료형이 정수 자료형보다 무조건 앞서게 됨.
    
    return 0;
}