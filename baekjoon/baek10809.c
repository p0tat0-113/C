#include <stdio.h>
#include <string.h>

int main(void){
    char alphabet[26];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 97+i;
    }

    char str[101];
    scanf("%s",str);

    for (int j = 0; j < 26; j++)
    {
        int num = -1;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == alphabet[j])
            {
                num = i;
                break;
            }
        }
        printf("%d ",num);
    }

    return 0;
}