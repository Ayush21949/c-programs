#include<stdio.h>
int main()
{
    int a=2,b=4,c=78;
    if(a>b)
    {
        if(a>c)
       {
         printf("a is largest %d",a);
         }
        else
        {
            printf("c is alrgest %d",c);
        }
    }
    else{
        if(b>c)
        {
        printf("b is largest %d",b);
        }
        
        else {
            printf("c is largest %d",c);
            }
     }
     return 0;
}