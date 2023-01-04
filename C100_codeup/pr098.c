#include <stdio.h>

int main() {
	int a[101][101]={0,}, h, w, n, l, d, x, y;
	
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
	    scanf("%d %d %d %d", &l, &d, &x, &y);
	    // d = 0이면 옆으로 막대
        // d = 1이면 밑으로 막대 l은 막대길이
	    if (d == 0) { 
	        for (int j = y; j < y+l; j++) {
	            a[x][j] = 1;
	        }
	    }
	    else { 
	        for (int j = x; j < x+l; j++) {
	            a[j][y] = 1;
	        }
	    }
	}
 
	for (int i=1; i<=h; i++) {
	    for (int j = 1; j <= w; j++) {
	        printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
}