#include<stdio.h>

int length(char s[]){
    int count = 0;
    while(s[count] != '\0'){
        count++;
    }
    return count;
}
void reverse(char s[]){
    int len = length(s);
    printf("\n");
    for(int i = len - 1; i >= 0; i--){
        printf("%c", s[i]);
    }
}

int main(){
    char s[50];
    printf("Enter a string: ");
    scanf("%s", s);
    reverse(s);
}