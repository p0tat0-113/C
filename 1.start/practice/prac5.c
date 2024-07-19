#include <stdio.h>

int isSosu(int num){
    if (num == 2)
    {
        return 1;
    }
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return 0;
        }   
    }
    return 1;
}

int func(void){
   int count = 0;
   int num = 2;
   while (count < 11)
   {
        if (isSosu(num))
        {
            printf("%d ",num);
            count++;
        }
        num++;
   }
   
}

int main(void){
    func();

    
    return 0;
}

