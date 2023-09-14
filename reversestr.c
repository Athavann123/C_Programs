#include<stdio.h>

int length(char word[]){
    int count = 0;
    while(word[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    char c[100];
    scanf("%s", c);
    int len = length(c);

    for(int i = len - 1; i >= 0; i--){
        printf("%c ", c[i]);
    }
}