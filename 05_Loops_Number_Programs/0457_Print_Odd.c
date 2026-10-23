/* Loop example 57: Print_Odd */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    for(int i=1;i<=n;i+=2)printf("%d ",i);puts("");
    return 0;
}
