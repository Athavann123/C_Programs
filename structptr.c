#include<stdio.h>

struct Person{
    int age;
    float weight;
};

int main(){
    struct Person *Personptr, person1;
    Personptr = &person1;
    printf("Age: ");
    scanf("%d", &Personptr->age);
    printf("\nWeigth: ");
    scanf("%f", &Personptr->weight);
    printf("\n%d\n%0.1f", Personptr->age, Personptr->weight);
}