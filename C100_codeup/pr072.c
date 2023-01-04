#include <stdio.h>
 
int main() {
    int num1, num2; 
    scanf("%d", &num1);
    reload:
        scanf("%d", &num2);
        printf("%d\n", num2);
        num1 -= 1;
        if(num1 > 0) goto reload;
        
    return 0;
}