/* String example 56: Count_Vowels */
#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    if(!fgets(s,sizeof(s),stdin))return 1;
    int c=0;for(int i=0;s[i] && s[i]!='\n';i++){char x=s[i];if(x>='A'&&x<='Z')x+=32;if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')c++;}printf("Vowels = %d\n",c);
    return 0;
}
