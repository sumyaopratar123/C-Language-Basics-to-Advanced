/* Array example 7: Linear_Search */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Array size (1-100): ");
    if(scanf("%d",&n)!=1 || n<1 || n>100)return 1;
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    int key,found=-1;printf("Key: ");if(scanf("%d",&key)!=1)return 1;for(int i=0;i<n;i++)if(a[i]==key){found=i;break;}printf("Index = %d\n",found);
    return 0;
}
