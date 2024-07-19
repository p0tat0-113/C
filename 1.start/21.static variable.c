#include <stdio.h>

//static 지역변수, 지역변수 선언 앞에 static을 붙이면 static변수가 된다.
//staitc 지역변수는 다음과 같은 특징을 가짐.

//1. 스코프가 선언된 블록 안으로 한정된다.
//2. 전역변수와 같이 프로그램 시작과 동시에 데이터 영역에 할당돼서 프로그램이 종료될 때까지 생존한다.
//전역변수의 특성은 필요하지만, 스코프를 제한해야할 때 유용하다.

//전역변수에도 static을 붙일 수 있는데 이에 대해서는 나중에 배워보쟈.
//자바에서 클래스에 붙어있는 static 멤버와는 좀 다른 느낌이네.

void printNum(void) {
    static int num;
    printf("%d\n",num++);
}

int main(void){
    printNum();
    printNum();
    printNum();
    printNum();
    printNum();    
    return 0;
}

