#include <stdio.h>

int main() {
    int n;
    int i;
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        if(i % 3 == 0)
            continue;
        printf("%d ", i);
    }
}