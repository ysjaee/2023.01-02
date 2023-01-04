#include <stdio.h>

int main() {
    int i, num;
    scanf("%d", &num);
    int sum = 0;
    for ( i = 1; i <= num; i++ ) {
        if( i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d",sum);
}