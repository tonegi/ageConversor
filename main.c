#include <stdio.h>

int main(void) {
    int years, months, days, age;
  printf("Type how many years you have: ");
      scanf("%d",&years);
  printf("Type how many months you have: ");
      scanf("%d",&months);
  printf("Type how many days you have: ");
      scanf("%d",&days);
    age = years * 365 + months * 30 + days;
  printf("Your age in days is: %d", age);
  return 0;
}
