#include<stdio.h>
void swapping(int *x,int *y){
    int t=*x;
    *x=*y;
     *y=t;
}
    int main ()
    {
        int a=20;
        int b=30;
        swapping( &a,&b);
        printf("%d %d",a,b);
        return 0;
    }