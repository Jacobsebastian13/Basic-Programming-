#include<stdio.h>
int main(void){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a<0)
    {
        /* code */
        printf("%d is negative number",a);
    }
    else
    {
        printf("%d is positive",a);
    }
    
    
}