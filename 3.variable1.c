#include <stdio.h>

int main (void){
    int num;//int형을 담을 수 있는 메모리 공간을 할당하고, 이름을 num이라고 붙임.

    printf("%d\n",num);//변수를 선언하고 초기화 하지 않으면 쓰레기 값이 출력됨

    num = 10;//변수 초기화
    printf("%d\n",num);
}