#include <stdio.h>

int main (void){
    int num1;
    num1 = 10;
    int num2;
    num2 = 20;
    //많은 컴파일러 들이 변수의 선언문을 중괄호의 앞쪽에 몰아 놓게 제한한다고 한다.
    //지금 컴파일이 되긴 하는데 아래와 같은 코딩 스타일이 더 권장된다고 함.

    //맨 윗줄이라고 치고
    int num3;
    int num4;
    num3 = 30;
    num4 = 40;
}