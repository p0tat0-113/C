#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (str[i]-48);//아스키코드
    }
    printf("%d",sum);
    
    return 0;
}   