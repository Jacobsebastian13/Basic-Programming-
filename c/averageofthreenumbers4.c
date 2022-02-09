#include<stdio.h>
int main(void){
    int num1,num2,num3;
    float avg;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("average of %d %d %d is %f",num1,num2,num3,avg);
}