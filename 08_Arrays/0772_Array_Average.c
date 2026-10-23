/* Array example 82: Array_Average */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Array size (1-100): ");
    if(scanf("%d",&n)!=1 || n<1 || n>100)return 1;
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    long s=0;for(int i=0;i<n;i++)s+=a[i];printf("Average = %.2f\n",(double)s/n);
    return 0;
}
