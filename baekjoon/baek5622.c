#include <stdio.h>
#include <string.h>

int main(void){
    char str[16];
    scanf("%s",str);

    int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] <= 'C')
        {
            sum += 3;
        } else if (str[i] <= 'F')
        {
            sum += 4;
        } else if (str[i] <= 'I')
        {
            sum += 5;
        } else if (str[i] <= 'L')
        {
            sum += 6;
        } else if (str[i] <= 'O')
        {
            sum += 7;
        } else if (str[i] <= 'S')
        {
            sum += 8;
        } else if (str[i] <= 'V')
        {
            sum += 9;
        } else
        {
            sum += 10;
        }
    }
    printf("%d\n",sum);

    return 0;
}