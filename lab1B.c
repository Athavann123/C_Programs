#include<stdio.h>

int main(){
    int day, month, year;
    printf("Enter month, day and year separated by spaces: ");
    scanf("%d %d %d", &month, &day, &year);
    printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d", month, day, year, year, month, day, year, month, day);
}