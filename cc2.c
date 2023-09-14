#include<stdio.h>

int main(){
    char c;
    c = getchar();
    int count = 0, a_count = 0;
    while(c != EOF){
        if(c == 'a'){
            a_count++;
        }
        count += 1;
        c = getchar();
    }
    printf("Number of chars: %d", count);
    printf("\nNumber of 'a': %d", a_count);
}