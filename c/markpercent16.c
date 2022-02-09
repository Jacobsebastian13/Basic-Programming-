#include<stdio.h>
int main(void){
    float per;
    printf("Enter Your toatal mark percentage:  ");
    scanf("%f",&per);
    if (per>90)
    {
        printf("Grade is A");
    }
    else if (per>80 & per<90 )
    {
        printf("Grade is B");
    }
    else if (per>70 & per<80)
    {
        printf("Grade is c");
    }
    else if (per>60 & per<70)
    {
        printf("Grade is D");
    }
    else if (per>50 & per<60)
    {
        printf("Grade is E");
    }
    else{
        printf("Failed..!");
    }
    
    
    
    
    
}