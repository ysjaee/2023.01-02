#include <stdio.h>

int main() {
    int a[11][11] = {};
    int x = 2, y = 2;
    int i, j;

    for (i = 1; i<= 10; i++) {
        for (j = 1; j <= 10; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    while (a[x][y] != 2) {
        a[x][y] = 9;
        if (a[x][y+1] != 1){
            y += 1;     //오른쪽 이동
        }
        else if (a[x+1][y] != 1) {
            x += 1; //밑으로 이동
        }
        else {
            break;
        }
    }
    a[x][y]=9;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}