#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getSpaceIndex(char * str){//공백인 부분의 인덱스를 반환함.
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            return i;
        }   
    }
    return -1;//공백을 찾지 못하면 -1을 반환함.
}

void compareName(char * name1, char * name2){
    int spaceIndex1 = getSpaceIndex(name1);
    int spaceIndex2 = getSpaceIndex(name2);

    if (spaceIndex1 != spaceIndex2)
    {
        puts("이름이 다릅니다.");
        return;
    } 
    
    if (strncmp(name1, name2, spaceIndex1) == 0)
    {
        puts("이름이 같습니다.");
    } else {
        puts("이름이 다릅니다.");
    }
}

void compareAge(char * name1, char * name2){
    int spaceIndex1 = getSpaceIndex(name1);
    int spaceIndex2 = getSpaceIndex(name2);

    char * ages1 = &name1[spaceIndex1 +1];
    char * ages2 = &name2[spaceIndex2 +1];

    int age1 = atoi(ages1);
    int age2 = atoi(ages2);

    if (age1 == age2)
    {
        puts("나이가 같습니다.");
    } else {
        puts("나이가 다릅니다.");
    }
}

int main(void){
    //prac3에서 배운걸 활용하지 않고, 너무 날먹한 것 같아서 다시 제대로 풀어봄.

    char input1[50];
    char input2[50];
    fgets(input1, sizeof(input1), stdin);
    fgets(input2, sizeof(input2), stdin);

    compareName(input1, input2);
    compareAge(input1, input2);



    return 0;
}