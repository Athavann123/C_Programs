#include<stdio.h>

int main(){
    char c;
    c = getchar();
    while(c != EOF){
        if(c >= 'a' && c <= 'z'){
            c = c - 32;
        }
        if(c >= '0' && c < '5'){
            c = '-';
        }
        if(c > '5' && c <= '9'){
            c = '+';
        }
        putchar(c);
        c = getchar();
    }
}