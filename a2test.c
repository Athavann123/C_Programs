#include<stdio.h>
#include<string.h>

int main(){
    float fare = 15;
    char embark[20] = "Cherbourg";
    if(strcmp(embark, "Cherbourg") == 0 && fare >= 9 && fare < 30){
        printf("LowerMiddle");
    }
}