#include<stdio.h>

int main(){
    char c;
    c = getchar();
    int count = 0;
    while(c != EOF){
        count += 1;
        c = getchar();
    }
    printf("Number od chars: %d", count);
}