/* File handling example 2 */
#include <stdio.h>
int main(void) {
    FILE *fp=fopen("sample.txt","r");if(!fp){perror("sample.txt");return 1;}int ch;while((ch=fgetc(fp))!=EOF)putchar(ch);fclose(fp);
    return 0;
}
