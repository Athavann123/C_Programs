#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 4;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    printf("Old values:");

    if(ptr == NULL){
        printf("Can't be allocated");
    }

    for(int i = 0; i < n; i++){
        printf("\n%p", ptr + i);
    }
    n = 6;
    ptr = realloc (ptr, n*sizeof(int));
    printf("\nNew Values:");
    for(int i = 0; i < n; i++){
        printf("\n%p", ptr + i);
    }
    free(ptr);
}