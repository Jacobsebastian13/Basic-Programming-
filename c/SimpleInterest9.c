#include<stdio.h>
int main(void){
    int principle;
    float rate,interest,time;
    printf("Enter the principal Amt: ");
    scanf("%d",&principle);
    printf("Enter the rate of Interest: ");
    scanf("%f",&rate);
    printf("Enter the time Period: ");
    scanf("%f",&time);
    interest=(principle*rate*time),100;
    printf("Your simple interest is: %f",interest);
}