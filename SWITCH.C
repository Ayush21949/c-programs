#include<stdio.h>
int main()
{
    int  marks;
    printf(" put value the marks");
    scanf("%d",&marks);
    int c=marks/10;
    switch(c)
    {
        case 9: 
        printf("grade A");
        break;
        case 8:
        printf("grade B");
        break;
        case 7:
        printf("grade C");
        break;  
    default: printf( " any thing not mtch");
    }
    return 0;
}