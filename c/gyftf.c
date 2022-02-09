#include<stdio.h>
#define MACRO
int x=1;
void fun(){
    #ifndef MACRO
    x=x+1;
    #endif
 

   
    printf("%d",x);
    
}
    int main(){
        
            fun();
             return 0;
        }
        
        
       
    
