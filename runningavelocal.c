#include<stdio.h>

void run_avg(int sum, int count){
    float a = sum;
    float b = count;
    double new_sum = a/b;
    printf("running average is %d / %d = %0.3f", sum, count, new_sum);
}

int main(){
    int num, count = 1, sum = 0;
    printf("Enter number (-1 to quit): ");
    scanf("%d", &num);

    while(num != -1){
        sum += num;
        run_avg(sum, count);
        count++;

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &num);
    }
}