#include<stdio.h>
int main(void){
    float a,sum;
    int b;
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a decimal: ");
    scanf("%f",&a);
    sum=a+b;
    printf("Sum of %d and %f is %f",b,a,sum);
}