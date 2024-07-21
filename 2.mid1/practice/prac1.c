#include <stdio.h>

void printOdd(int arr[], int len){
    printf("홀수 출력: ");
    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2 != 0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    printf("\n");
}

void printEven(int arr[], int len){
    printf("짝수 출력: ");
    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2 == 0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    printf("\n");
}

int main(void) {
    //길이가 10인 배열을 선언
    //main함수 내에서 scanf로 숫자들을 입력 받음.
    //배열에서 홀수인 숫자만 출력하는 함수와
    //짝수인 숫자만 출력하는 함수를 작성

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d",&arr[i]);
    }

    printOdd(arr,10);
    printEven(arr,10);
    
    
    return 0;
}