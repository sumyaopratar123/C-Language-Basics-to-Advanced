/* Pointer example 13: Pointer_Value_Address */
#include <stdio.h>
int main(void) {
    int x=25;
    int *p=&x;printf("Value=%d Address=%p\n",*p,(void*)p);
    return 0;
}
