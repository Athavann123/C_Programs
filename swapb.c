#include<stdio.h>

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapIncres(int *p1, int *p2, int *p3){
    *p2 *= 2;
    swap(p1, p3);
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while(a > 0){
        printf("Original inputs:   a:%d   b:%d  c:%d", a, b, c);
        swapIncres(&a, &b, &c);
        printf("\nRearranged inputs: a:%d b:%d c:%d", a, b, c);
        printf("\n");
        printf("\n");
        scanf("%d %d %d", &a, &b, &c);
    }
}