/* String example 48: Count_Spaces */
#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    if(!fgets(s,sizeof(s),stdin))return 1;
    int c=0;for(int i=0;s[i] && s[i]!='\n';i++)if(s[i]==' ')c++;printf("Spaces = %d\n",c);
    return 0;
}
