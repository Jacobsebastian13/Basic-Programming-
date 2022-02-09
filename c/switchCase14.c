#include<stdio.h>
int main(void){
    int cho;
    printf("1. Porotta \n2. Biriyani \n3. Mandhi \n4.Rice");
    printf("\n Enter your choice");
    
    scanf("%d",&cho);
    switch (cho)
    {
    case 1:
        printf("you have entered porotta");
        break;
    case 2:
        printf("You have enetered Biriyani");
        break;
    case 3:
        printf("You have entered Mandhi");
        break;
    case 4:
        printf("You have entered Rice");
        break;
    
    default:
        printf("Wrong Entry");
        break;
    }
}