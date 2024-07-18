#include <stdio.h>

int main(void){
    
    int num = 0;
    while (num < 5)
    {
        printf("Hello Wold %d\n",num++);
    }
    
    while (1)//false(0)이 아닌 값을 집어 넣으면 무한 반복 됨.
    {
        printf("료이키 텐카이\n");
    }
    

    return 0;
}