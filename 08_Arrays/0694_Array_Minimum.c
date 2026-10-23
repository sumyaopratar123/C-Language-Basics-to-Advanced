/* Array example 4: Array_Minimum */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Array size (1-100): ");
    if(scanf("%d",&n)!=1 || n<1 || n>100)return 1;
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    int m=a[0];for(int i=1;i<n;i++)if(a[i]<m)m=a[i];printf("Minimum = %d\n",m);
    return 0;
}
