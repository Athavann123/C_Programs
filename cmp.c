#include<stdio.h>
#include<string.h>
#define SIZES 36

int my_strcmp(char x[], char y[]){
    int a = 0;
    if(strlen(x) == strlen(y)){
        for(int i = 0; i < strlen(x); i++){
            if(x[i] > y[i]){
                a = 1;
                break;
            }

            if(x[i] < y[i]){
                a = -1;
                break;
            }

            if(x[i] == y[i]){
                a = 0;
            }
        }
    }

    else{
        for(int i = 0; i < SIZES; i++){
            if(x[i] > y[i]){
                a = 1;
                break;
            }

            if(x[i] < y[i]){
                a = -1;
                break;
            }
        }
    }
    return a;
}

int main(){
    char a[SIZES];
    char b[SIZES];
    
    scanf("%s", a);
    scanf("%s", b);

    while(strcmp(a, "xxx") != 0 || strcmp(b, "xxx") != 0){
        int resu = strcmp(a, b);
        if(resu > 0){
            printf("\nstrcmp: \"%s\" appears later in dictionary than \"%s\"", a, b);
        }

        if(resu < 0){
            printf("\nstrcmp: \"%s\" appears earlier in dictionary than \"%s\"", a, b);
        }

        if(resu == 0){
            printf("\nstrcmp: \"%s\" and \"%s\" have same content", a, b);
        }

        int resu2 = my_strcmp(a, b);

        if(resu2 > 0){
            printf("\nmystrcmp: \"%s\" appears later in dictionary than \"%s\"", a, b);
        }

        if(resu2 < 0){
            printf("\nmystrcmp: \"%s\" appears earlier in dictionary than \"%s\"", a, b);
        }

        if(resu2 == 0){
            printf("\nmystrcmp: \"%s\" and \"%s\" have same content", a, b);
        }

        printf("\n");
        scanf("%s", a);
        scanf("%s", b);
    }
}