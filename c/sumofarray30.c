#include<stdio.h>
int main(){
    int l,i,a[100];
    printf("Enter array limit: ");
    scanf("%d",&l);
    printf("Enter array values:");
    for ( i = 0; i < l; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    printf("Entered values are:\t");
    
    for ( i = 0; i < l; i++)
    {
        printf("%d\t",a[i]);
    }
    for ( i = 0; i < l; i++)
    {
        sum=sum+a[i];
    }
    printf("\n");
    printf("sum of array is %d",sum);
    

    

    

}