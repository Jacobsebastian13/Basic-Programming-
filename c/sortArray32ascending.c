#include<stdio.h>
int main(){
    int i,j,temp,l,a[100];
    printf("Enter array limit: ");
    scanf("%d",&l);
    printf("Enter values");
    for ( i = 0; i < l; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < l-1; i++)
    {
        for ( j = i+1; j < l ; j++)
        {
           if (a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
           
        }
        
    }
    printf("Array after sorting  ");
    for ( i = 0; i < l; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    
}