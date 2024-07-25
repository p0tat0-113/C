#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int strategyPattern(int arr[],int length, int (*strategy) (int,int)){
    int num = arr[0];
    for (int i = 0; i < length; i++)
    {
        num = strategy(num,arr[i]);
    }
    return num;
}

int getBigger(int a, int b){
    return (a>b) ? a:b;
}

int getSmaller(int a, int b){
    return (a<b) ? a:b;
}

int main(void){
    //배열의 이름이 배열의 시작 주소 값을 저장하는 상수 형태의 포인터이듯,
    //함수의 이름도 함수가 저장된 메모리 주소값을 저장하는 상수 형태의 포인터이다.

    //함수의 참조값 저장을 위한 별도의 포인터변수를 선언할 수 있으며, 이런 포인터 변수를 함수 포인터변수라고 한다.

    //함수 포인터의 타입은 함수의 '반환타입'과 '매개변수의 선언형태'를 기준으로 구분하기로 약속되어있댜.
    //그래서 위와 같이 int add(int a, int b){} 함수를 담을 수 있는 포인터변수는 아래와 같이 선언한다.

    int (*fptr) (int,int) = add; // 반환타입 (*포인터변수명) (반환타입,반환타입,...)
    //포인터 변수에 함수의 참조값을 저장하려면 이렇게 대입연산을 하면 된다. 대입 연산이 끝나면 둘의 차이점은 상수냐, 변수냐 차이일 뿐이다. 배열을 포인터변수에 담던 것과 똑같다.
    //fptr을 이용해서도 함수 add를 호출할 수 있다.

    int result = fptr(5,5);
    printf("%d\n",result);


    //재밌는 점은 이것을 이용해서 함수의 인수로 다른 함수를 넣을 수가 있다!!!
    //전략을 나중에 바꿔끼우는 식으로 유연성을 제공할 수 있다!!
    //코드의 재사용성을 증대시킬 수 있음.
    //파이썬 자바스크립트에서 함수를 1등급 객체라고 부르던 것이 다 이런게 추상화된 거였구나...
    //마치 함수들을 조립하는 것 같음.

    int arr[] = {1,2,3,4,5};
    printf("%d %d\n",strategyPattern(arr,5,getBigger),strategyPattern(arr,5,getSmaller));


    return 0;
}

