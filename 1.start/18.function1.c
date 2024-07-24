#include <stdio.h>

int add(int,int);//함수 선언

int main(void) {
    printf("%d\n",add(3,5));
    
    return 0;
}

//이렇게 함수 선언이 함수 호출문보다 밑에 있는 경우 컴파일 에러가 발생할 수 있다.
//이럴 때는 함수의 선언부분(함수의 머리)만 호출문 앞에 적어주면 된다.
//위에서는 함수를 선언하고, 밑에서 함수를 정의 하는 것이다.

int add(int a, int b){//함수 정의
    return a+b;
}