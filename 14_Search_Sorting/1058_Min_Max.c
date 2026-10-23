/* Sorting/searching example 48: Min_Max */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Size (1-100): ");
    if(scanf("%d",&n)!=1||n<1||n>100)return 1;
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    int mn=a[0],mx=a[0];for(int i=1;i<n;i++){if(a[i]<mn)mn=a[i];if(a[i]>mx)mx=a[i];}printf("Min=%d Max=%d\n",mn,mx);
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
