/* Function example 20: Sum_Function */
#include <stdio.h>
int sum_to_n(int x){int s=0;for(int i=1;i<=x;i++)s+=i;return s;}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    printf("Sum = %d\n",sum_to_n(n));
    return 0;
}
