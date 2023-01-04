#include <stdio.h>

int main() {
    long long int a, b, c, d, i;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    long long int sum = a;
    for (i = 1; i < d; i++) {
        sum = sum * b + c;
    }
printf("%lld",sum);
}