#include<stdio.h>
#include<string.h>
#define SIZE 46

void printReverse(char *str){
    char *s = str;
    for(int i = strlen(str) - 1; i >= 0; i--){
        printf("%c", *(s + i));
    }
}

int isPalindrome(char *str){
    int counta = 0, countb = strlen(str) - 1;
    char *a = str;
    char *b = str + strlen(str) - 1;
    while(countb > counta){
        if(*a != *b){
            return 0;
        }
        countb--;
        *(a++);
        *(b--);
    }
    return 1;
}

int isQuit(char str[]){
    if(str[0] == 'q' && str[1] == 'u' && str[2] == 'i' && str[3] == 't'){
        return 1;
    }
    return 0;
}

int main(){
    char str[SIZE];
    fgets(str, SIZE, stdin);
    while(isQuit(str) != 1){
        str[strcspn(str, "\n")] = '\0';
        printf("%s", str);
        printf("\n");
        printReverse(str);
        if(isPalindrome(str) == 1){
            printf("\nIs a palindrome");
        }

        else{
            printf("\nNot a palindrome");
        }
        printf("\n");
        fgets(str, SIZE, stdin);
    }
}