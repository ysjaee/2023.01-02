#include <stdio.h>

int main() {
    int n, i, j, x, y;
    int a[20][20]={};
    for(i=1; i<=19; i++) 
        for(j=1; j<=19; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &n);

    for(i=1; i<=n; i++) //좌표 개수
    {
        scanf("%d %d", &x, &y);
        for(j=1; j<=19; j++) //가로 줄 바꾸기
            {
            if(a[x][j]== 0) 
                a[x][j] = 1;
            else 
                a[x][j] = 0;
        }
        for(j=1; j<=19; j++) //세로 줄 바꾸기
        {
            if(a[j][y]==0) 
                a[j][y]=1;
            else 
                a[j][y] = 0;
  }
    }
    for (i = 1; i <= 19; i++) {
        for (j = 1; j <= 19; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}