#include <stdio.h>

int main() {
    long long int h, b, c, s;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    double res;
    res = h*b*c*s;
    printf("%.1lf MB",res/8/1024/1024);
}