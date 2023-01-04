#include <stdio.h>

int main() {
    int a, b, c, i;
    scanf("%d %d %d",&a,&b,&c);
    int sum = a;
    for (i = 1; i < c; i++) {
        sum += b;
    }
printf("%d",sum);
}