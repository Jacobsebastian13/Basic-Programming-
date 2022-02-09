#include<stdio.h>
int main(void){
    int i,j,a;
    printf("Enter a limit ");
    scanf("%d",&a);
    for ( i = 1; i <=a; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}