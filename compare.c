#include<stdio.h>

int length(char word[]){
    int count = 0;
    while(word[count] != '\0'){
        count++;
    }
    return count;
}

int compare(char word1[], char word2[]){
    int count = 0, len = 0;

    if(length(word1) > length(word2)){
        return 0;
    }
    
    if(length(word1) < length(word2)){
        return 0;
    }
    len = length(word1);
    for(int i = 0; i < len; i++){
        if(word1[i] == word2[i]){
            count++;
        }
    }
    return count == len;
}

int main(){
    char s[100], t[100];
    printf("Input the 1st string : ");
    scanf("%s", s);
    printf("Input the 2nd string : ");
    scanf("%s", t);
    printf("\nString1: %s", s);
    printf("\nString2: %s", t);
    if(compare(s, t) == 1){
        printf("\nExpected Output : Strings are equal.");
    }
    else{
        printf("\nExpected Output : Strings are not equal.");
    }
}