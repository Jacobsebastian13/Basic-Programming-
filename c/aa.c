#include<stdio.h>
int main(){
    int arr[2][4]={{5,6,4,3},{1,2,7,8}};
    int* p;
    p=(*(arr+1)+1);
    printf("%d",*p);
}