#include <stdio.h>

//값을 복사해서 전달, 밖에 아무런 영향도 끼치지 못함.
void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//참조값을 복사해서 전달
void swapByReference(int * ptr1, int * ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void){
    //값에 의한 전달, 참조에 의한 전달

    int a = 10, b = 20;

    swapByValue(a,b);//swap되지 않음.
    printf("%d %d\n",a,b);

    swapByReference(&a,&b);//&를 붙여서 참조값을 전달해야 함.
    printf("%d %d\n",a,b);


    //이제 scanf()에 인수를 넣을 때 &를 붙여야 하는 이유를 확실히 알겠지? 메모리 주소로 직접 접근해서 값을 넣어주는 것임.
    //배열같은 경우, 배열의 이름이 그 자체로 참조값이기 때문에 &를 붙이지 않아도 됨.

    return 0;
}