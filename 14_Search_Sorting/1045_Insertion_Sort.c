/* Sorting/searching example 35: Insertion_Sort */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Size (1-100): ");
    if(scanf("%d",&n)!=1||n<1||n>100)return 1;
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=1;i<n;i++){int key=a[i],j=i-1;while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;}
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
