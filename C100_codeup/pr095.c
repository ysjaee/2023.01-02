#include <stdio.h>

int main() {
    int n, i;
    int res;
    scanf("%d\n", &n);
    int a[10000] = {};
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n; i >= 1; i--) {
        if (a[i] < res) {
            res = a[i];
        }
    }
    printf("%d",res);
}