#include<stdio.h>
int main()
{
    int a[3][3]={{2,3,4},{4,89,7},{3,56,4}};
    int i,j,k;
    k=a[0][0];
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(a[i][j]>k){
                k=a[i][j];
            }
        }

    }

    printf("highest value =%d",k);
    return 0;
}