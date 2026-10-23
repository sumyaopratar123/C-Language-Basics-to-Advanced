/* Sorting/searching example 38: Selection_Sort */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Size (1-100): ");
    if(scanf("%d",&n)!=1||n<1||n>100)return 1;
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n-1;i++){int m=i;for(int j=i+1;j<n;j++)if(a[j]<a[m])m=j;int t=a[i];a[i]=a[m];a[m]=t;}
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
