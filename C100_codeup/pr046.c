#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a+b+c);
    float result;
    result = ((float)a + (float)b + (float)c)/3;
    printf("%0.1f",result);
}