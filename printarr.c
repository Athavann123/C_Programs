#include<stdio.h>
#include<string.h>

int main(){
    char arr[20] = "Hello";
    char *ptr = arr;
    for(int i = 0; i < strlen(arr); i++){
        printf("%c", *(ptr + i));
    }
}