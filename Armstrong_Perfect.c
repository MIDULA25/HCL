#include <stdio.h>
int isArmstrong(int n)
{
 int original = n;
 int sum = 0;
 while (n > 0)
 {
 int digit = n % 10;
 sum = sum + digit * digit * digit;
 n = n / 10;
 }
return (sum == original);
}
int isPerfect(int n)
{
 if (n <= 1)
 return 0;
 int sum = 0;
 for (int i = 1; i <= n / 2; i++)
 {
 if (n % i == 0)
 sum += i;
 }
 return (sum == n);
}
int main(void)
{
 int num;
 scanf("%d", &num);
 if (isArmstrong(num))
 printf("Armstrong Number\n");
 else
 printf("Not Armstrong Number\n");
 if (isPerfect(num))
 printf("Perfect Number\n");
else
 printf("Not Perfect Number\n");
return 0;
}
