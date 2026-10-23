/* Array example 48: Array_Copy */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Array size (1-100): ");
    if(scanf("%d",&n)!=1 || n<1 || n>100)return 1;
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    int b[100];for(int i=0;i<n;i++)b[i]=a[i];for(int i=0;i<n;i++)printf("%d ",b[i]);puts("");
    return 0;
}
