/* Math example 33: Power */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    int e;printf("Exponent (0-20): ");if(scanf("%d",&e)!=1||e<0||e>20)return 1;long long p=1;for(int i=0;i<e;i++)p*=n;printf("Power = %lld\n",p);
    return 0;
}
