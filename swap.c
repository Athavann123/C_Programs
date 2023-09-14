#include<stdio.h>

void swap(int *p1, int *p2, int *p3){
    int temp1 = *p3;
    int temp2 = *p1;
    *p1 = 100 + temp1;
    *p2 *= 2;
    *p3 = temp2;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while(a > 0){
        printf("Original inputs:   a:%d   b:%d  c:%d", a, b, c);
        swap(&a, &b, &c);
        printf("\nRearranged inputs: a:%d b:%d c:%d", a, b, c);
        printf("\n");
        printf("\n");
        scanf("%d %d %d", &a, &b, &c);
    }
}