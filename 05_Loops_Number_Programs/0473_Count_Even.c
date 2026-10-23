/* Loop example 73: Count_Even */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer (keep it small for factorial/Fibonacci): ");
    if(scanf("%d",&n)!=1 || n<0) return 1;
    int c=0;for(int i=1;i<=n;i++)if(i%2==0)c++;printf("Even count = %d\n",c);
    return 0;
}
