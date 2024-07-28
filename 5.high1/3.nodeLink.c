#include <stdio.h>

int main(void){
    struct node{
        int num;
        struct node * nextNode;
    };

    struct node node1;
    struct node node2;
    struct node node3;
    struct node node4;
    struct node node5;
    struct node * arr[5] = {&node1,&node2,&node3,&node4,&node5};

    // for (size_t i = 0; i < 5; i++)
    // {
    //     arr[i].num = i;
    //     if (i == 4)
    //     {
    //         arr[i].nextNode = NULL;
    //     } else {
    //         arr[i].nextNode = &arr[i+1];
    //     }
    // }

    //처음에는 `struct node * currNode = &node1;` 이렇게 했는데 작동안됨. 구조체 변수도 정말 단순 변수일 뿐이고, 값을 복사해서 배열에 넣었다는 것을 간과함.
    //그냥 arr을 포인터 배열로 바꾸겠음.
    // struct node * currNode = &arr[0];
    // while (currNode != NULL)
    // {
    //     printf("%d -> ",currNode -> num);
    //     currNode = currNode ->nextNode;
    // }

    for (size_t i = 0; i < 5; i++)
    {
        arr[i] -> num = i;
        if (i == 4)
        {
            arr[i] -> nextNode = NULL;
        } else {
            arr[i] -> nextNode = arr[i+1];
        }
    }

    struct node * currNode = arr[0];
    while (currNode != NULL)
    {
        printf("%d -> ",currNode ->num);
        currNode = currNode -> nextNode;
    }
    

    return 0;
}