#include <stdio.h>
#include <string.h>

int main(void) {
    //"구조체"라는 것은 하나 이상의 변수를 묶어서 새로운 자료형을 정의하는 도구이다.
    //쉽게 얘기해서 자바에서 신나게 쓰던 클래스의 원시적인 형태라고 보면 된다.

    //하나의 개념을 만드는 것. 얘를 들어 마우스의 위치를 나타내는 point라는 구조체를 만들어보자.
    struct point//point가 타입 이름.
    {
        int xpos; //멤버변수
        int ypos;
    };

    //point라는 사용자 정의 타입을 정의 했으니까 이제 변수를 선언해보자. 이것을 "구조체변수"라고 한다.
    struct point pos1; //구조체 변수를 선언할 때는 `struct 타입이름 변수이름`형식으로 선언한다.

    //일단 구조체는 클래스처럼 힙영역에 인스턴스가 생성되는게 아니고, 선언위치에 따라서 스택영역에 할당될 수도 있고, 데이터영역에 할당될 수도 있다. 사용자가 malloc로 힙영역에 할당할 수도 있음.
    //그리고 구조체 변수는 포인터 변수같은게 아니다. 진짜 그냥 변수다. 근데 멤버변수들을 감싸고 있는 것. 예) 구조체 변수 example, example.a의 주소는 &example + offsetof(struct MyStruct, a)
    
    //접근을 할 때는 .연산자를 쓰면 된다.
    pos1.xpos = 10;
    pos1.ypos = 20;
    printf("%d %d\n",pos1.xpos, pos1.ypos);

    //멤버변수로 배열, 포인터 변수를 선언해도 그냥 원래 쓰던 것과 똑같이 쓰면 된다.
    struct human
    {
        char name[20];
        char phoneNumber[20];
        int age;
    };
    
    struct human dongwoo1;
    strcpy(dongwoo1.name,"김동우");
    strcpy(dongwoo1.phoneNumber, "010-3877-4635");
    dongwoo1.age = 23;

    printf("%s %s %d\n",dongwoo1.name,dongwoo1.phoneNumber,dongwoo1.age);

    //구조체 변수의 초기화, 변수 선언과 동시에 초기화 할 수 있다. 배열의 초기화 방식과 똑같음.
    struct human dongwoo2 = {"dongwookim","010-3877-4635",23};//문자열이라 할지라도 초기화 과정에서 strcpy를 호출할 필요 없음.
    printf("%s %s %d\n",dongwoo2.name,dongwoo2.phoneNumber,dongwoo2.age);
}