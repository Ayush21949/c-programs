#include<stdio.h>
int main()
{
    int e,r,t;
    int a[3][3]={{2,3,4},{5,6,7},{4,5,7}};
    int b[3][3]={{1,7,9},{12,34,56},{6,5,8}};
    int c[3][3];
    for(e=0;e<3;e++){
        for(r=0;r<3;r++){
            c[e][r]=0;
            for(t=0;t<3;t++){
                c[e][r]=c[e][r]+a[e][t]*b[t][r];
            }
        }
    }
for(e=0;e<3;e++){
    for(r=0;r<3;r++){
printf("%d  ",c[e][r]);
}
printf("\n");}
return 0;
}