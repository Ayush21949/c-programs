#include<stdio.h>
int main(){
    int n;
    int i,j,end;
    printf("enter value of n");
    scanf("%d",&n);
    int art[n];
    for(i=0;i<n;i++)
    {
        printf("put the values",i+1);
        scanf("%d",&art[i]);
    }

    for(j=0,end=n-1;j<end;j++,end--)
    {
        int t= art[j];
        art[j]=art[end];
        art[end]=t;
        
    }
    for(j=0;j<n;j++)
    {
        printf("%d\n",art[j]);
    }
    return 0;

}