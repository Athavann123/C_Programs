#include<stdio.h>

int main(){
    int age = 10;
    int age2 = 100;
    int *ptr = &age;
    printf("age: %d %d", *ptr, *ptr);
    *ptr = 14;
    printf("\nage: %d %d", *ptr, *ptr);
    int *ptr2 = &age2;
    *ptr2 = *ptr * 3;
    printf("\nage2: %d %d", *ptr2, *ptr2);
    ptr2 = ptr;
    printf("\nptr2’s current pointee: %d", *ptr2);
    printf("\nage: %d %d %d", age, *ptr, *ptr2);
    *ptr2 -= 1;
    printf("\nage: %d %d %d", age, *ptr, *ptr2);
    printf("\n%p %p %p", &age, ptr, ptr2);
}