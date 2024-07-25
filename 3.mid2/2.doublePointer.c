#include <stdio.h>

void callByValue(int * ptr1, int *ptr2);
void callByReference(int ** dptr1, int ** dptr2);
void MaxAndMin(int ** maxDptr1, int ** minDptr1, int arr[], int length);

int main(void){
    //포인터 변수를 참조하는 포인터, 이중포인터

    int num = 10;

    int * ptr1 = &num;//ptr은 변수 num을 참조하는 포인터변수.

    int ** dptr = &ptr1;//dptr은 포인터변수 ptr을 참조하는 이중포인터 변수.

    printf("%d\n", ptr1 == *dptr);//*dptr은 ptr을 의미. dptr은 ptr을 참조하고 있는 것이기 때문에 *연산을 하면 ptr을 뱉어냄.
    printf("%d\n", **dptr);//**dptr은 num을 의미

    int * ptr2 = *dptr;//ptr2 = ptr1
    *ptr2 = 20;
    printf("%d\n",num);


    //포인터 변수의 callByReference, 두 포인터 변수를 인수로 받아서 서로 참조하는 대상으로 바꾸게 해볼 것이다.
    int num1 = 10;
    int num2 = 20;

    ptr1 = &num1;
    ptr2 = &num2;

    callByValue(ptr1,ptr2);//내부의 지역변수들 끼리만 서로 참조 대상을 바꿨기 때문에 외부에 영향을 끼치지 못함.
    printf("%d %d\n",*ptr1,*ptr2);

    callByReference(&ptr1,&ptr2);//ptr1과 ptr2의 참조값을 넘겨서, 메모리에 직접 접근해서 참조대상을 바꿈.
    printf("%d %d\n",*ptr1,*ptr2);


    //포인터 배열도 사실 더블포인터였다!!!
    //배열의 이름은, 배열의 첫번째 요소를 참조함.

    int arr1[] = {1,2,3};
    printf("%p %p\n",arr1, &arr1[0]);

    //포인터 배열의 이름도, 배열의 첫번째 요소인 포인터 변수를 참조한다.
    int * arr2[] = {ptr1,ptr2};
    printf("%p %p\n",arr2, &arr2[0]);
    //즉 포인터 배열의 이름도 포인터 변수를 참조하는 더블 포인터인 것이다.

    dptr = arr2;//일반 배열로 하던 것처럼, 더블 포인터 변수에 참조값을 넘기는 것도 가능.
    printf("%d %d\n",*dptr[0],*dptr[1]);

    //지금으로써는 포인터의 필요성에 대한 의문이 살짝 생길 수도 있긴 한데, C언어로 자료구조를 구현하다보면 많이 쓰게 된다고 함.
    //우선은, 함수 밖에서 선언된 변수를 함수 안에서 접근할 수 있는 방법을 제공해준다는 것을 알고 있자.
    

    //문제풀이, 두 포인터 변수와 배열을 함수의 인자로 넘기고, 배열의 요소중 가장 큰 값과 작은 값의 참조값을 maxPtr와 minPtr에 담아야 한다.
    int * maxPtr;
    int * minPtr;
    int arr[5] = {1,2,3,4,5};
    MaxAndMin(&maxPtr,&minPtr,arr,5);
    printf("%d %d\n",*maxPtr,*minPtr);
    
    return 0;
}

void callByValue(int * ptr1, int *ptr2){
    int * temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

//대상이 일반변수에서 포인터 변수로 바뀌었다 뿐이지, 원리는 일반 변수를 swap하던 것과 똑같다.
void callByReference(int ** dptr1, int ** dptr2){
    int * temp = *dptr1;//ptr1
    *dptr1 = *dptr2;//ptr1 = ptr2
    *dptr2 = temp;//ptr2 = temp
}

void MaxAndMin(int ** maxDptr1, int ** minDptr1, int arr[], int length){
    *maxDptr1 = &arr[0];
    *minDptr1 = &arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > **maxDptr1)
        {
            *maxDptr1 = &arr[i];
        }
        if (arr[i] < **minDptr1)
        {
            *minDptr1 = &arr[i];
        }
    }
    
}