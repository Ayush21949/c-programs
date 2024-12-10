#include<stdio.h>
int main()
{ int k,i;
    int a[5]={3,5,7,9,2};
   int *start=a;
   int *end=a+4;
   while(start<end){
        k= *start;
        *start=*end;
        *end =k;
        start++;
        end--;
   }
   for(i=0;i<=4;i++)
   {
        printf("%d\n", a[i]);
   }
return 0;
}