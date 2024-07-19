#include <stdio.h>

int main(void){
    
    int num = 0;
    while (num < 5)
    {
        printf("Hello Wold %d\n",num++);
    }
    
    // while (1)//false(0)이 아닌 값을 집어 넣으면 무한 반복 됨.
    // {
    //     printf("료이키 텐카이\n");
    // }

    int c1 = 0;
    while (c1 < 5)
    {
        int c2 = 0;
        while (c2 < c1)
        {
            printf("O ");
            c2++;
        }
        c1++;
        printf(" *\n");
    }
    
    return 0;
}