#include<stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int nums[n], reverse_nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    int count = n - 1;
    for(int i = 0; i < n; i++){
        reverse_nums[i] = nums[count];
        count--;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", reverse_nums[i]);
    }
}