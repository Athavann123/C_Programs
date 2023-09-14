#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, max = 0;
    printf("Input number of elements: ");
    scanf("%d", &n);
    int *p = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", p+i);
    }

    for(int i = 0; i < n; i++){
        if(*(p + i) > max){
            max = *(p + i);
        }
    }
    printf("\n%d", max);
    free(p);
}