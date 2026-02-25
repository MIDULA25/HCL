#include <stdio.h>
int main(void)
{
 int n;
 scanf("%d", &n);
 int reversed = 0;
 while (n != 0)
 {
 int digit = n % 10;
reversed = reversed * 10 + digit;
 n = n / 10;
 }
 printf("%d\n", reversed);
 return 0;
}
