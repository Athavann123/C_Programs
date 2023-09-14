#include<stdio.h>

int main(){
    char name[100];
    int num;
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter an integer number: ");
    scanf("%d", &num);
    int t = num * 3, q = num * 4;
    printf("Hi %s, you entered %d. Triple and quadruple of %d are %d and %d respectively", name, num, num, t, q);
}
