#include<stdio.h>
int main(void){
    int a,b,ch;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for Addition. \nEnter 2 for Subtraction \nEnter 3 for Multiplication \nEnter 4 Division \n");
    printf("Enter your choice");
    scanf("%d",&ch);
    if (ch==1)
    {
        int sum=a+b;
        printf("Sum of %d and %d is %d",a,b,sum);
    }
    else if (ch==2)
    {
        int diff=a-b;
        printf("Diff is %d and %d is %d",a,b,diff);
    }
    else if (ch==3)
    {
        int pro=a*b;
        printf("Product is %d and %d is %d",a,b,pro);
    }
    else if (ch==4)
    {
        float quo=a/b;
        printf("Quotient is %d and %d is %f",a,b,quo);
    }
    else
    {
        printf("Wrong Entry..::");
    }
    
    
    
    
    
}