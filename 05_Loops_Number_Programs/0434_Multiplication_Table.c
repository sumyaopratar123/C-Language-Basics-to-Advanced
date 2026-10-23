/* Loop example 34: Multiplication_Table */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    for(int i=1;i<=10;i++) printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}
