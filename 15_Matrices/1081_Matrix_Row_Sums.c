/* Matrix example 11: Matrix_Row_Sums (3x3) */
#include <stdio.h>
int main(void) {
    puts("Enter 9 integers row by row:");
    int a[3][3];for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&a[i][j]);for(int i=0;i<3;i++){int s=0;for(int j=0;j<3;j++)s+=a[i][j];printf("Row %d sum=%d\n",i+1,s);}
    return 0;
}
