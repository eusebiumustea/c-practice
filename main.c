#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int primeCheck(int n) {
      if (n <= 1) {
        return 0;
      }
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) { 
        return 0;
      }
    }
   return 1;
}
void firstPrimeNumbers(int n) {
    for (int i = 2; i <= n; i++) {
        if (primeCheck(i) == 1) {
          printf("%d\n", i);
        }
    }  
    
}
void convertToCelsius(int F, double C) {
printf("Enter fahrenheit temperature: ");
scanf("%i", &F);
C = (5.0/9.0) * (F - 32.0);
printf("In celsius %.2f", C);
}
void checkYearBisect(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
       printf("%d is bisect", year);
    } else {
       printf("%d is NOT bisect", year );
    }
}
void main() {
    firstPrimeNumbers(16);
   
}