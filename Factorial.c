#include <stdio.h>
int main(void)
{
 int n;
 unsigned long long fact = 1;
 scanf("%d", &n);
 if (n < 0)
 {
 printf("Factorial not defined\n");
 return 0;
 }
 for (int i = 1; i <= n; i++)
 {
 fact = fact * i;
 }
 printf("%llu\n", fact);
 return 0;
}
