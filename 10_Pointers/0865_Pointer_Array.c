/* Pointer example 15: Pointer_Array */
#include <stdio.h>
int main(void) {
    int x=25;
    int a[5]={1,2,3,4,5};int *p=a;for(int i=0;i<5;i++)printf("%d ",*(p+i));puts("");
    return 0;
}
