/* File handling example 1 */
#include <stdio.h>
int main(void) {
    FILE *fp=fopen("sample.txt","w");if(!fp){perror("sample.txt");return 1;}fputs("Learning C file handling\\n",fp);fclose(fp);puts("Wrote sample.txt");
    return 0;
}
