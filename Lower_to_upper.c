#include <stdio.h>
int main(void)
{
 char str[1000];
 fgets(str, sizeof(str), stdin);
 int i = 0;
 while (str[i] != '\0')
 {
if (str[i] >= 'a' && str[i] <= 'z')
 {
 str[i] = str[i] - 32;
 }
 i++;
 }
 printf("%s", str);
 return 0;
}
