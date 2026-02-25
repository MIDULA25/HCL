#include <stdio.h>
int main(void)
{
 int n;
 scanf("%d", &n);
 if (n <= 1)
 {
 printf("Not Prime\n");
return 0;
 }
 for (int i = 2; i * i <= n; i++)
 {
 if (n % i == 0)
 {
 printf("Not Prime\n");
 return 0;
 }
 }
 printf("Prime\n");
 return 0;
}
