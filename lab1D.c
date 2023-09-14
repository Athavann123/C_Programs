#include <stdio.h>

float sum (float i, float j);
void greet(int i);

int main(){  
   int a = 2011 + 20;
   greet(a);
   printf("\n");
   int b = 1015 - 3;
   greet(b);
   float x, y;
   printf("\nEnter two float numbers separated by ##: ");
   scanf("%f##%f", &x, &y);
   float su = sum(x,y);
   printf("%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
    float n1 = i, n2 = j;
    return n1 + n2;             
}

/* need to revise this function */
void greet(int i){
  printf("Hello %d!", i);
}