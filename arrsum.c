#include<stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    printf("%d", sum);
}