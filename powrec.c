#include<stdio.h>
#include<math.h>

double my_pow(double base, double exp){
    if(exp >= 0){
        if(exp == 0){
            return 1;
        }

        else{
            return base * my_pow(base, exp - 1);
        }
    }

    else{
        if(base == 0){
            return 1;
        }

        else{
            return (1/base) * my_pow(base, exp + 1);
        }
    }
}

int main(){
    double base;
    int exp;
    printf("Enter base and power: ");
    scanf("%lf %d", &base, &exp);
    while(base != -10000){
        double resu = pow(base, exp);
        printf("pow: %0.4f", resu);

        double resu2 = my_pow(base, exp);
        printf("\nmy_pow: %0.4f\n", resu2);

        printf("\n");
        printf("Enter base and power: ");
        scanf("%lf %d", &base, &exp);
    }
}