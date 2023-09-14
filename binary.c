#include<stdio.h>

void decimal_to_binary(int num){
    char bits[32];
    int count = 0;
    while(num > 0){
        if(num % 2 == 0){
            bits[count] = '0';
        }
        else{
            bits[count] = '1';
        }
        num /= 2;
        count++;
    }
    for(int i = count - 1; i >= 0; i--){
        printf("%c", bits[i]);
    }
}

int main(){
    decimal_to_binary(1000);
}