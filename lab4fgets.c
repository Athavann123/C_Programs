#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define SIZE 14
#define SIZE2 44

int e(char word1[]){
    if(word1[0] == 'e' && word1[1] == 'x' && word1[2] == 'i' && word1[3] == 't'){
        return 1;
    }

    return 0;
}

int main(){
    char input[SIZE2];
    char name[SIZE];
    int age, f, c;
    float rate;

    printf("Enter name, age and rate: ");
    fgets(input, SIZE2, stdin);
    while(e(input) != 1){
        printf("%s", input);
        fputs(input, stdout);
        sscanf(input, "%s %d %f", name, &age, &rate);
        name[0] = name[0] - 32;
        age += 10;
        rate *= 2.0;
        f = floor(rate);
        c = ceil(rate);
        printf("\n%s-%d-%0.3f-[%d, %d]", name, age, rate, f, c);

        printf("\nEnter name, age and rate: ");
        fgets(input, SIZE2, stdin);
    }
}