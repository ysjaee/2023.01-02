#include <stdio.h>

int main() {
    long int a, b, c, i;
    scanf("%d %d %d",&a,&b,&c);
    long int sum = a;
    for (i = 1; i < c; i++) {
        sum *= b;
    }
printf("%ld",sum);
}