#include <stdio.h>
int main(void)
{
double celsius;
scanf("%lf", &celsius);
double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
printf("%.1lf\n", fahrenheit);
return 0;
}