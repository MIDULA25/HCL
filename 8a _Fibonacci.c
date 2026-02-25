#include <stdio.h>
int main(void)
{
 int n;
 scanf("%d", &n);
 if (n <= 0)
 return 0;
 long long a = 0, b = 1, next;
 if (n >= 1)
 printf("%lld ", a);
 if (n >= 2)
 printf("%lld ", b);
 for (int i = 3; i <= n; i++)
 {
 next = a + b;
 printf("%lld ", next);
 a = b;
 b = next;
 }
 return 0;
}
