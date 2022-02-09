#include<stdio.h>
int main(void){
    int num,mul,i;
    printf("Enter a number ");
    scanf("%d",&num);
    for ( i = 1; i <=10; i++)
    {
        mul=num*i;
        printf("%d*%d=%d\n",num,i,mul);

    }
    
}