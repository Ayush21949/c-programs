#include<stdio.h>
int main()
{ int i,j,r,c,m,n;
   
    printf("put value of r,c");
    scanf("%d %d", &r ,&c);
     int ar[r][c];
    for (m=0;m<r;m++)
    {
        for(n=0;n<c;n++)
        {  
            printf("put the value\n");
            scanf("%d",&ar[m][n]);
    
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    { 
    printf("%d\n",ar[i][j]);
    }
    }
    return 0;
}