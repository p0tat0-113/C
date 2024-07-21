#include <stdio.h>

//브론즈2 간단한 배열 활용 문제

int main(void){
    int n,m;
    
    scanf("%d %d",&n,&m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }

    for (int i = 0; i < m; i++)
    {
        int i,j;
        scanf("%d %d",&i,&j);
        i--;
        j--;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}