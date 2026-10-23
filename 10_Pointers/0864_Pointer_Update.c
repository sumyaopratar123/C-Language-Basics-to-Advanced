/* Pointer example 14: Pointer_Update */
#include <stdio.h>
int main(void) {
    int x=25;
    int *p=&x;*p+=10;printf("Updated value=%d\n",x);
    return 0;
}
