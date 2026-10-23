/* String example 11: To_Uppercase */
#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    if(!fgets(s,sizeof(s),stdin))return 1;
    for(int i=0;s[i] && s[i]!='\n';i++)if(s[i]>='a'&&s[i]<='z')s[i]-=32;printf("%s",s);
    return 0;
}
