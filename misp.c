#include<stdio.h>
#include<string.h>

int mispelled(char word1[], char word2[]){
    int length = 0, count = 0;

    if(strlen(word1) > strlen(word2)){
        length = strlen(word1);
    }
    
    if(strlen(word1) < strlen(word2)){
        length = strlen(word2);
    }
    
    if(strlen(word1) == strlen(word2)){
        length = strlen(word1);
    }

    for(int i = 0; i < length; i++){
        if(word1[i] != word2[i]){
            count++;
        }
    }
    return count <= 1;
}

int main(){
    char word1[100] = "versed";
    char word2[100] = "versed";
    printf("%d", mispelled(word1, word2));
}