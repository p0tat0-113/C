#include <stdio.h>

void primitive(int num){
    num += 10;
}

void printArr(int * ptr,int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
}

//매개변수를 이렇게 선언할 수도 있다. 배열을 인수로 받는다는게 좀 더 명확하게 드러남.
void changeValueOfArr(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        ++arr[i];
    }
}

int main(void){
    //일단 기본적으로 대입할 때는 항상 복사돼서 대입된다. 그게 값이던, 참조값이던 간에 복사돼서 대입됨.

    //그래서 함수에 그냥 값을 인수로 넘기는 경우에는, 값만 복사되기 때문에 인수와, 매개변수는 서로 완전히 다른 변수이다.
    //그래서 함수 안에서 매개변수로 무슨 짓을 하던 간에 인수에는 아무런 영향도 미치지 못한다.
    int num = 10;
    primitive(10);
    printf("%d\n",num);

    //배열을 인수로 넘길 때는 어떻게 해야할까? 배열을 통째로 넘기는 것은 불가능하다. 대신에 포인터 변수를 매개변수로 두어서 배열의 참조값을 인수로 넘기면 된다.
    int arr[] = {1,2,3};
    printArr(arr,sizeof(arr)/sizeof(int));//C언어에서는 배열의 크기를 따로 넘겨줘야 한다. len(), .length 이런게 없어ㅠㅠ 함수쪽에서 계산하면 그냥 포인터변수의 크기가 나오게 된다.

    //메모리 주소만 넘겨받으면 값의 변경도 얼마든지 가능하다.
    changeValueOfArr(arr,3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}