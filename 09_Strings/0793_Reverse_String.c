/* String example 3: Reverse_String */
#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    if(!fgets(s,sizeof(s),stdin))return 1;
    int n=0;while(s[n] && s[n]!='\n')n++;for(int i=n-1;i>=0;i--)putchar(s[i]);puts("");
    return 0;
}
