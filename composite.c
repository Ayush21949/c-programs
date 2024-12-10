#include<stdio.h>
int main()
{
    int i=2,j,isComposite;
    while(i<=200)
    {
        isComposite=0;
        for(j=2;j<i;j++)
        {
           if( i%j==0)
           {
            isComposite=1;
            break;
            }
        }
        if(isComposite)
        {
            printf("i=%d , ",i);
        }
    i++;}
    return 0;
}