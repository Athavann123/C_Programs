#include<stdio.h>

void printElements(int arr[], int index, int len){
    if(index == len){
        return;
    }
    printf("%d ", arr[index]);
    printElements(arr, index + 1, len);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printElements(arr, 0, 5);
}