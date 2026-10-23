/* Array example 29: Count_Positive */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Array size (1-100): ");
    if(scanf("%d",&n)!=1 || n<1 || n>100)return 1;
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    int c=0;for(int i=0;i<n;i++)if(a[i]>0)c++;printf("Positive count = %d\n",c);
    return 0;
}
