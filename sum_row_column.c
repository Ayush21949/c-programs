#include<stdio.h>
int main()
{
    int a[3][3]={{2,3,4},{4,89,7},{3,56,4}};
    int i,j,k,l;
    for(i=0;i<3;i++){
        k=0;
        for(j=0;j<3;j++){
            k=k+a[i][j];
        }
          printf("sum of rows=%d  ",k);
        printf("\n");
        k=0;
        for(l=0;l<3;l++){
            k=k+a[l][i];
            
        } printf("sum of column=%d  ",k);
        }
    return 0;
    }
