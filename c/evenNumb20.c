#include<stdio.h>
int main(void){
    int i,n;
    printf("Enter a limit");
    scanf("%d",&n);
    for ( i = 2; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    
}