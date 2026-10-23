/* Math example 62: Perfect_Number */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    int s=0;for(int i=1;i<n;i++)if(n%i==0)s+=i;puts(n>0&&s==n?"Perfect":"Not perfect");
    return 0;
}
