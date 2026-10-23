/* Array example 40: Count_Occurrences */
#include <stdio.h>
int main(void) {
    int a[100],n;
    printf("Array size (1-100): ");
    if(scanf("%d",&n)!=1 || n<1 || n>100)return 1;
    printf("Enter %d integers: ",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    int key,c=0;printf("Key: ");if(scanf("%d",&key)!=1)return 1;for(int i=0;i<n;i++)if(a[i]==key)c++;printf("Occurrences = %d\n",c);
    return 0;
}
