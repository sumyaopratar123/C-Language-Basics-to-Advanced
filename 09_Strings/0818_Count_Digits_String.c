/* String example 28: Count_Digits_String */
#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    if(!fgets(s,sizeof(s),stdin))return 1;
    int c=0;for(int i=0;s[i] && s[i]!='\n';i++)if(s[i]>='0'&&s[i]<='9')c++;printf("Digits = %d\n",c);
    return 0;
}
