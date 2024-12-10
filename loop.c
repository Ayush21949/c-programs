#include<stdio.h>
int main()
{
    int i,n,number,sum=0;
    float avg;
    printf("n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        printf("put number value");
        scanf("%d",&number);
        sum=sum+number;
    }
    avg=sum/n;
    printf("avg=%f",avg);
    return 0;
}