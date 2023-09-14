#include<stdio.h>
#include<stdlib.h>

struct box{
    int length, width, height;
};

typedef struct box box;

int volume(box b){
    return b.length * b.width * b.height;
}

int main(){
    int n;
    scanf("%d", &n);
    box *boxes = malloc(n * sizeof(box));
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    printf("%d", volume(boxes[0]));
}