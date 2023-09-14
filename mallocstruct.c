#include<stdio.h>
#include<stdlib.h>

struct Person{
    int age;
    float weight;
    char name[30];
};

int main(){
    int n;
    struct Person* ptr;
    printf("Enter how many people: ");
    scanf("%d", &n);
    ptr = (struct Person*) malloc(n * sizeof(struct Person));
    for(int i = 0; i < n; i++){
        printf("\nEnter name, age, and weight: ");
        scanf("%s %d %f", (ptr + i)->name, &(ptr + i)->age, &(ptr + i)->weight);
    }

    for(int i = 0; i < n; i++){
        printf("\nname: %s age:%d weight:%0.1f", (ptr + i)->name, (ptr + i)->age, (ptr + i)->weight);
    }
}