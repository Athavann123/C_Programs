#include<stdio.h>

struct Person{
    double salary;
    int age;
};

int main(){
    struct Person c = {.age = 20, .salary=50};
    printf("%0.2f", c.salary);
}