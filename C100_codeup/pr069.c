#include <stdio.h>

int main () {
    char score;
    scanf("%c", &score);
    switch (score)
    {
        case 'A': 
            printf("best!!!\n");
            break;
        case 'B': 
            printf("good!!\n");
            break;
        case 'C': 
            printf("run!\n");
            break;
        case 'D': 
            printf("slowly~\n");
            break;
        default : 
            printf("what?\n");
    }
}