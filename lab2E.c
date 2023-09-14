#include<stdio.h>

int length(char word[]){
    int count = 0;
    while(word[count] != '\0'){
        count++;
    }
    return count;
}

int indexOf(char word[], char c){
    int len = length(word);
    int index = -1;
    for(int i = 0; i < len; i++){
        if(word[i] == c){
            index = i;
            break;
        }
    }
    return index;
}

int occurence(char word[], char c){
    int len = length(word), count = 0;
    for(int i = 0; i < len; i++){
        if(word[i] == c){
            count++;
        }
    }
    return count;
}

void displayStr(char word[]){
    int len = length(word);
    printf("Input word is \"");
    for(int i = 0; i < len; i++){
        putchar(word[i]);
    }
    printf("\"");
}

int isQuit(char word[]){
    if(word[0] == 'q' && word[1] == 'u' && word[2] == 'i' && word[3] == 't'){
        return 1;
    }
    return 0;
}

int main(){
    char word[20], c;
    printf("Enter a word and a character separated by blank: ");
    scanf("%s %c", word, &c);

    while(isQuit(word) != 1){
        displayStr(word);
        printf("\nContains %d characters", length(word));
        printf("\n'%c' appears %d times in the word", c, occurence(word, c));
        printf("\nIndex of '%c' in the word is %d", c, indexOf(word, c));
        printf("\n");
        printf("\nEnter a word and a character separated by blank: ");
        scanf("%s %c", word, &c);
    }
}