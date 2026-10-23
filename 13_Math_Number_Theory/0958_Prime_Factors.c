/* Math example 18: Prime_Factors */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    int x=n;for(int i=2;i<=x/i;i++)while(x%i==0){printf("%d ",i);x/=i;}if(x>1)printf("%d",x);puts("");
    return 0;
}
