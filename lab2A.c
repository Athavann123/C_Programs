#include<stdio.h>

int isDigit(char c){
    if(c >= '0' && c <= '9'){
        return 1;
    }
    return 0;
}

int isLetter(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
    }
    return 0;
}

int isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    char c;
    printf("Enter an integer and a character separated by blank: ");
    scanf("%d %c", &num, &c);
    while(num != -10000){
        if(isLetter(c) == 1){
            printf("Character '%c' represent a letter", c);
        }

        if(isDigit(c) == 1){
            int sum = num + (c - '0');
            printf("Character '%c' represents a digit. Sum of %d and %c is %d", c, num, c, sum);
        }

        if(isOperator(c) == 1){
            printf("Character '%c' represents an operator", c);
        }

        if(isLetter(c) == 0 && isDigit(c) == 0 && isOperator(c) == 0){
            printf("Character %c represents others", c);
        }

        printf("\n");
        printf("\nEnter an integer and a character separated by blank: ");
        scanf("%d %c", &num, &c);
    }
}