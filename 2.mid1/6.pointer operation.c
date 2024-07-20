#include <stdio.h>

int main(void){
    //포인터도 연산이 가능하다.
    int * intPtr = 0;
    double * doublePtr = 0;

    intPtr++;
    doublePtr++;
    //둘 다 1씩 더했는데 intPtr은 4, doublePtr은 8이 늘어남.
    printf("%p\n",intPtr);
    printf("%p\n",doublePtr);
    //그 타입의 크기만큼 연산되는 것이다.

    //근데 이거 또 배열에 인덱스로 접근하는 거랑 똑같네?
    //그리고 배열변수랑 포인터변수랑 상수,변수 차이 빼고는 똑같잖아.

    //포인터 연산을 통해서 배열의 각 요소에 접근하는 것이 가능하다.
    int arr[] = {1,2,3};
    printf("%d\n",*(arr+0));//배열변수도 포인터이기 때문에 *연산자로 접근 가능
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+2));


    return 0;
}