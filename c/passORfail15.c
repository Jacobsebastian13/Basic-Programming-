#include<stdio.h>
int main(void){
    float mark;
    printf("Enter your marks in 100: ");
    scanf("%f",&mark);
    if (mark>50)
    {
        printf("You have passed");
    }
    else
    {
        printf("You have failed");
    }
    
    

}