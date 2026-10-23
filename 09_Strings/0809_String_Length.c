/* String example 19: String_Length */
#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    if(!fgets(s,sizeof(s),stdin))return 1;
    int i=0;while(s[i] && s[i]!='\n')i++;printf("Length = %d\n",i);
    return 0;
}
