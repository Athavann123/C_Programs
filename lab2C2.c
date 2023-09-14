#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
  int i, count_even = 0, count_prime = 0;
  int arr[SIZE];
  int even[SIZE];
  int prime[SIZE];
  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // a random number that's in the range of [0,40] inclusive
    arr[i] = ran;
  }

  // display the array
  printf("array [ ");
  for(int i = 0; i < SIZE; i++){
    printf("%d ", arr[i]);
  } 
  printf("]\n");
  // create two arrays of the same size of arr, one to hold even numbers and one for prime numbers; 
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // you may add other variables as needed
  for(int i = 0; i < SIZE; i++){
    if(isPrime(arr[i]) == 0){
        prime[count_prime] = arr[i];
        count_prime++;
    }

    if(arr[i] % 2 == 0){
        even[count_even] = arr[i];
        count_even++;
    }
  }
  
  // output the even numbers
  printf("\n%d even numbers: ", count_even);
  for(int i = 0; i < count_even; i++){
    printf("%d ", even[i]);
  }

  // output the prime numbers
  printf("\n%d prime numbers: ", count_prime);
  for(int i = 0; i < count_prime; i++){
    printf("%d ", prime[i]);
  }
}
