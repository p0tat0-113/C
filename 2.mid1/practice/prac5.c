#include <stdio.h>

void bubbleSort(int arr[], int len){
    for (int j = len-1; j >= 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            int temp = arr[i];
            if (arr[i] > arr[i+1])
            {
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    printf("sorting completed!!!\n");

    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(void) {
    //버블 정렬 알고리즘 구현, 가장 비효율적인 정렬 알고리즘.

    int arr[] = {3,2,4,5,1};

    bubbleSort(arr,sizeof(arr)/sizeof(int));
    
    return 0;
}