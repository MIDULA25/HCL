#include <stdio.h>
int main(void)
{
int year;
scanf("%d", &year);
printf("%s\n",
(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "Leap Year" :"Not Leap Year");
return 0;
}