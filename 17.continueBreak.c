#include <stdio.h>

int main(void) {

    for (int i = 1; i < 10; i++)
    {
        if (i%2 != 0)
        {
            continue;
        }
        
        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
            if (j == i)
            {
                break;
            }
            
        }
    }
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if ((i*10 + j)+(j*10 + i) == 99)
            {
                printf("%d %d\n",i,j);
            }
        }
    }
    

    return 0;
}