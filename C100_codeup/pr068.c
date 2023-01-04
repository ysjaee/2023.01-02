#include <stdio.h>

int main () {
    int num;
    scanf("%d", &num);
    if ((num <= 100) & (num >= 90)) 
        printf("A");
    else if ((num >= 70) & (num < 90))
        printf("B");
    else if ((num >= 40) & (num < 69))
        printf("C");
    else
        printf("D");
}