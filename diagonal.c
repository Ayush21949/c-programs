#include<stdio.h>
int main()
{
    int a[3][3]={{2,3,4},{4,89,7},{3,56,4}};
    int i,j,k=0;
    for(i=0,j=2;i<3&&j>=0;i++,j--)
    {
        k=k+a[i][j];
    }
    printf("%d\n",k);
    return 0;
}


