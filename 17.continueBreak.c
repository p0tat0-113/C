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
    
    //continue문을 만나면 그 즉시 반복문의 조건 검사 위치로 이동한다.

    // break문을 만나면 가장 가까이서 감싸고 있는 반복문을 빠져나간다.
    // if문이랑 같이 쓴다고 해서 if문을 빠져나가는 것이라고 오해하면 안됨.

    return 0;
}