#include <stdio.h>

int main(void){
    //포인터 변수를 담을 수 있는 포인터 배열
    //배열의 각 요소가 포인터 변수인 것이다.

    int num1 = 10, num2 = 20, num3 = 30;
    int * arr1[3] = {&num1, &num2, &num3};

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",*arr1[i]);
    }

    //문자열을 저장하는 포인터 배열
    //그냥 char 타입 포인터 배열이다.
    char str[] = "Hello";
    char * arr2[3] = {"Hello","Hello",str};//문자열 리터럴은 텍스트 세그먼트에 배치된 다음에 참조값이 반환된다.
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",arr2[i]);//%s 서식문자는 문자열 포인터를 필요로 하기 때문에 앞에 *연산자를 붙일 필요가 없다.
    }

    //포인터 배열은 포인터 변수들을 담는 배열임. 배열도 포인터 변수임. 즉 포인터 배열은 배열을 담을 수 있음. 2차원 배열이네.
    int a1[] = {1,2,3};
    int a2[] = {1,2,3};
    int * arr3[] = {a1,a2};
    printf("%d %d\n",arr3[0][0],arr3[1][0]);
    
    return 0;
}