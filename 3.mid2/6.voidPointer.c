#include <stdio.h>

void func(){
    return;
}

int main(void){
    //void 포인터는 어떤 타입의 변수이던지, 다 담을 수 있는 포인터 변수다. 심지어 함수의 주소까지도 담을 수 있다.

    int a = 10;
    double b = 20.0;
    int * c = &a;
    int arr[10];

    void *ptr;

    ptr = arr;
    ptr = func;
    ptr = &c;
    ptr = &a;
    ptr = &b;
    
    

    //그런데 이게 만능은 아니다. 접근의 기준을 제시해주는 타입이 없다보니까 포인터 연산을 못하고, 값의 변경이나 참조도 불가능하다.

    //printf("%d\n",*ptr); //컴파일 에러 발생
    //*ptr = 30.0;

    //void포인터는 일단 주소 값에만 의미를 두고, 포인터의 타입은 나중에 결정하려는 경우에 유용하게 사용된다고 한다.
    //뒤에서 메모리의 동적할당에 대해서 배울 때 사용하게 된다고 함.

    return 0;
}