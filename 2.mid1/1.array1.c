#include <stdio.h>

int main(void){
    int arr1[3];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    //배열은 반복문을 통해 순차적으로 접근이 가능하다.
    for (int i = 0; i < 3; i++)
    {
        printf("%#x\n",arr1[i]);//참조값 출력
    }

    printf("%#x %#x\n",arr1,arr1[0]);

    int arr2[7] = {1,2,3,4,5};//이렇게 선언과 초기화를 동시에 할 수 있다. 남는 공간은 자동으로 0으로 초기화됨.
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr2[i]);
    }
    
}