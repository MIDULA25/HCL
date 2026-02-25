#include <stdio.h>
int main(void)
{
int a, b;
if (scanf("%d %d", &a, &b) != 2)
return 0;
printf("%d\n", a + b);
printf("%d\n", a - b);
printf("%d\n", a * b);
if (b != 0)
printf("%d\n", a / b);
else
printf("Undefined\n");
return 0;
}