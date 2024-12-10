#include<stdio.h>
int main()
{
    int A,B;
    float result;
    printf("enter value\n");
    scanf("%d %d" ,&A,&B);
    char choice;
    printf("enter your choice btw a to c");
    scanf(" %c",&choice);
    switch(choice)
    {
        case 'a':
         result =A+B;
        printf("sum of A+B %f",result);
        break;
        case 'b':
         result= A-B;
        printf("subs of A and B %f",result);
        break;
        case'c':
        if(B!=0){ 
         result=A/B;
        printf("div is %f",result);}
        else{
            printf("undefined");
        }


    }
    return 0;
}