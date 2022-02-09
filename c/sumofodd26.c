#include<stdio.h>
int main(void){
    int num,i,sum;
    printf("Enter a limit:");
    scanf("%d",&num);
    sum=0;
    for ( i = 1; i <=num ; i+=2)
    {
        sum=sum+i;
        
    }
    printf("sum is %d",sum);
    
}