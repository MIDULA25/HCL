#include <stdio.h>
long long fib(int n)
{
 if (n == 0)
 return 0;
 if (n == 1)
 return 1;
 return fib(n - 1) + fib(n - 2);
}
int main(void)
{
 int n;
scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
 printf("%lld ", fib(i));
 }
 return 0;
}
