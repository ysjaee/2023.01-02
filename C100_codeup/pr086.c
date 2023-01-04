#include <stdio.h>

int main() {
    long long int h, b, c;
    scanf("%lld %lld %lld", &h, &b, &c);
    double res;
    res = h*b*c;
    printf("%.2lf MB",res/8/1024/1024);
}