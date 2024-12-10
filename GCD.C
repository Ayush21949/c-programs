#include<stdio.h>
int main()
{
    int A,B,gcd,i;
    printf("enter the values");
    scanf("%d %d",&A,&B);
    if(A<B)
    {
        int t=A;
        A=B;
        B=t;
    }

for(i=B;i>=1;i--)
{
    if((A%i==0)&&(B%i==0))
    {
    gcd=i;
    break;
    }

}
printf("gcd=%d",gcd);
return 0;
}
