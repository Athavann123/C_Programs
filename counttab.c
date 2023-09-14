#include<stdio.h>

int main(){
    char c;
    c = getchar();
    int count = 0;
    while(c != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            count++;
        }
        c = getchar();
    }
    printf("Count: %d", count);
}