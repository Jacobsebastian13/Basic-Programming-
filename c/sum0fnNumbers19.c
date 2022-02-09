#include<stdio.h>
int main(void){
    int i,sum,n;
    printf("Enter a number");
    scanf("%d",&n);
    sum=0;
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    
}