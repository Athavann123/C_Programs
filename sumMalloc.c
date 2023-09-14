#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int *ptr = (int*) malloc(n * sizeof(int));
    printf("Enter %d integer values", n);
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("Enter #%d: ", i+1);
        scanf("%d", (ptr + i));
    }

    for(int i = 0; i < n; i++){
        sum += *(ptr + i);
    }
    printf("%d", sum);
    free(ptr);
}