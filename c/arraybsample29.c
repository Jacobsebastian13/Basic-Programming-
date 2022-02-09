#include<stdio.h>
int main(){
    int i,d;
    printf("Enter the length of array: ");
    scanf("%d",&d);
    printf("Enter values to array. ");
    int a[d];
    for ( i = 0; i < d; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values are:\t");
    for ( i = 0; i < d; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}