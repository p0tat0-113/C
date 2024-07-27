#include <stdio.h>

void printArr(int size){
    int arr[size][size];

    int num = 1;//배열의 각 인덱스에 삽입되는 숫자.
    int count = 0;//반복문이 진행된 횟수를 저장함. 채워야될 깊이를 지정하는 역할을 함.

    for (int i = size; i > 0; i-=2)
    {
        for (int d = 0+count; d < size-count; d++)//왼쪽에서 오른쪽 방향으로 채우기
        {
            arr[0+count][d] = num++;
        }

        if (i-2 > 0)
        {
            for (int s = 0+count+1; s < size-count-1; s++)//위에서 아래 방향으로 채우기
            { 
                arr[s][size-count-1] = num++;
            }
        }

        if (num < size*size)
        {
            for (int a = size-count-1; a > 0+count-1; a--)//오른쪽에서 왼쪽으로 채우기
            {
                arr[size-count-1][a] = num++;
            }
        } 
        
        if (i-2 > 0)
        {
            for (int w = size-count-2; w > 0+count; w--)//위에서 아래 방향으로 채우기
            {
        
                arr[w][0+count] = num++;  
            }
        }

        count++;
    }
    printf("%d\n",count);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%-3d ",arr[i][j]);
        }
        printf("\n");
    }
    
}

int main(void){
    int size;
    scanf("%d",&size);
    printArr(size);

    return 0;
}