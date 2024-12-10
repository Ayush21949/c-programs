#include<stdio.h>
int main()
{
    int A,B,i,lcm;
    printf("put the valus");
    scanf("%d %d",&A,&B);
    if(A<B)
    {
        int t=A;
        A=B;
        B=t;
    }
    for(i=A;;i+=A)
    {
        if(i%B==0)
        {
            lcm=i;
            break;

        }

    }
    printf("lcm=%d",lcm);
    return 0;
}