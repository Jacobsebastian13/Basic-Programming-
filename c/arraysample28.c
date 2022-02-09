#include<stdio.h>
int main(){
    int i,a[6];
    printf("Enter 5 numbers.");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your array is:\t");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}