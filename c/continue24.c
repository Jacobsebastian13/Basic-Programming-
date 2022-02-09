#include<stdio.h>
int main(void){
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("hi ");
        if (i==5)
        {
            continue;
        }
        printf("Hello\n");
        
    }
    printf("Finished");
    
}