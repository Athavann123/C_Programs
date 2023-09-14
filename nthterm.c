#include<stdio.h>

int find_nth_term(int n, int a, int b, int c){
    if(n == 1){
        return 1;
    }

    if(n == 2){
        return b;
    }

    if(n == 3){
        return c;
    }

    else{
        return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
    }
}

int main(){
    int d = find_nth_term(4, 1, 1, 1);
    printf("%d", d);
}