/* Math example 49: Sum_Of_Squares */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    long long s=0;for(int i=1;i<=n;i++)s+=(long long)i*i;printf("Sum of squares = %lld\n",s);
    return 0;
}
