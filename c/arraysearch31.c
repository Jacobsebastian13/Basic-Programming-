#include<stdio.h>
int main(){
    int i,l,sch,a[100],flag=0;
    printf("Enter array limi");
    scanf("%d",&l);
    printf("Enter values:");
    for ( i = 0; i < l; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a value to search");
    scanf("%d",&sch);
    for ( i = 0; i < l; i++)
    {
        if (sch==a[i])
        {
            flag=1;
            break;
        }
       
        
    } 
    
    if (flag==1)
    {
       printf("Value found at %d position",i+1);
    }
    else
    {
        printf("Value not found.");
    }
    
    
    
    
}