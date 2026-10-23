/* Pointer example 40: Swap_Pointers */
#include <stdio.h>
int main(void) {
    int x=25;
    int y=99;int *p=&x,*q=&y;int t=*p;*p=*q;*q=t;printf("x=%d y=%d\n",x,y);
    return 0;
}
