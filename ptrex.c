#include<stdio.h>

int main(){
    int num = 50;
    int *ptr = &num;
    (*ptr)++;
    printf("%d", num);
}