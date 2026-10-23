/* Matrix example 36: Matrix_Print (3x3) */
#include <stdio.h>
int main(void) {
    puts("Enter 9 integers row by row:");
    int a[3][3];for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&a[i][j]);for(int i=0;i<3;i++){for(int j=0;j<3;j++)printf("%d ",a[i][j]);puts("");}
    return 0;
}
