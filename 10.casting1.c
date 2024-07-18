#include <stdio.h>

int main(void) {
    //묵시적 형변환과 명시적 형변환

    //대입연산자에 의해 이루어지는 묵시적 형변환
    //대입연산자의 왼편과 오른편의 타입이 맞지 않으면 자동으로 형변환이 일어난다.
    int intNum = 10;

    //int -> long -> double 이렇게 범위가 넓은 타입으로 갈 때는 정보의 손실이 발생하지 않는다.
    long longNum;
    longNum = intNum;
    printf("%d\n",longNum);

    double doubleNum;
    doubleNum = longNum;
    printf("%f\n",doubleNum);
    
    //그러나 넓은 범위의 타입에서 작은 범위의 타입으로 갈 때는 정보의 손실이 발생한다.

    //float -> int 소수점이 날라감
    float floatNum = 3.14f;
    intNum = floatNum;
    printf("%d\n",intNum);//소수부 손실 발생

    //int -> char 상위바이트 손실이 발생
    intNum = 130;
    char charNum = intNum;
    printf("%d\n",charNum);

    //자바에서는 큰 타입을 작은 타입에 대입할 때는 반드시 명시적으로 다운캐스팅했어야 했는데, C언어는 이것도 묵시적으로 형변환하네.

    
    return 0;
}