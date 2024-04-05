#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int primeCheck(int n)
{
  if (n <= 1)
  {
    return 0;
  }
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
void firstPrimeNumbers(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (primeCheck(i) == 1)
    {
      printf("%d\n", i);
    }
  }
}
void convertToCelsius(int F, double C)
{
  printf("Enter fahrenheit temperature: ");
  scanf("%i", &F);
  C = (5.0 / 9.0) * (F - 32.0);
  printf("In celsius %.2f", C);
}
void checkYear(int year)
{
  if (year % 4 == 0 && year % 100 != 0)
  {
    printf("%d is bisect", year);
  }
  else
  {
    printf("%d is NOT bisect", year);
  }
}
void getAllNumDivided(int divider, int from, int to)
{
  for (int i = from; i <= to; i++)
  {
    if (i % divider == 0)
    {
      printf("%d\n", i);
    }
  }
}
int getNumOfDigits(int n)
{
  int numOfDigits;
  int x = n;
  while (x)
  {
    numOfDigits++;
    x /= 10;
  }
  return numOfDigits;
}
char *reverseStr(char *str, int length)
{
  char *revStr;
  revStr = (char *)malloc((length + 1) * sizeof(char));
  int j;
  for (int i = length - 1; i >= 0; i--)
  {
    revStr[j] = str[i];
    j++;
  }
  revStr[j] = '\0';
  return revStr;
}

int main()
{
  int numbers[100];
  char numbersStr[100];
  int i = 0;
  printf("Apasa tab si enter pentru a selecta sirul de caractere introdus\n");
  printf("Introduceti sirul de caractere\n");
  while (getchar() != EOF)
  {
    scanf(" %c", &numbersStr[i]);
    i++;
  }
  printf("Caractere introduse: ");
  for (int j = 0; j <= i; j++)
  {
    printf("%c", numbersStr[i]);
  }
  return 0;
}
