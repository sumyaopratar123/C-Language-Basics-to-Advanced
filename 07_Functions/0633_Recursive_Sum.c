/* Function example 23: Recursive_Sum */
#include <stdio.h>
int sum_rec(int x){if(x<=0)return 0;return x+sum_rec(x-1);}
int main(void) {
    int n;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1 || n<0)return 1;
    printf("Recursive sum = %d\n",sum_rec(n));
    return 0;
}
