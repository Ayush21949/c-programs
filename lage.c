#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value n");
    scanf("%d",&n);
    int art[n];
    for (i=0;i<n;i++){
        printf("enter value %d\n",i+1);
        scanf("%d",&art[i]);
    }
    int largest=art[0];
    for(j=1;j<n;j++)
    {
        if(art[j]>largest)
        {
            largest=art[j];
        }
    }
printf("largest=%d",largest);
return 0;
}