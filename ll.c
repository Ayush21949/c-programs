#include <stdio.h>
int main() {
    int i,j;
    
    int a[2][2] = {{1,2},{4,5}};
    int b[2][2] = {{1,4},{3,6}};
    
    int c[2][2];
    
    for (i=0;i<2;i++){
        for (j=0;j<2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",c[i][j]);
        }
    }
    return 0;}