#include<stdio.h>
int main(void){
    int a=10,b=20,temp;
    temp=a;
    a=b;
    b=temp;
    printf("a: %d \n b:%d",a,b);
}