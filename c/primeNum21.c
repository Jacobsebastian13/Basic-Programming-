#include<stdio.h>
int main(void){
    int num,i;
    int flag=0;
    printf("Enter a number");
    scanf("%d",&num);
    for ( i = 2; i <num; i++)
    {
        if (num%i==0)
        {
           flag=1;
           break;
        }
        
        
    }
    if (flag==1)
    {
        printf("%d is not prime",num);
    }
    else
    {
        printf("%d is prime",num);
    }
    
    
    
}