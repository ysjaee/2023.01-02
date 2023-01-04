#include <stdio.h>

int main() {
    int num;
    int i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0)
            printf("X ");
        else
            printf("%d ",i);
    }
}