#include <stdio.h>
int main(void)
{
 char str[1000];
 char ch;
 fgets(str, sizeof(str), stdin);
 scanf(" %c", &ch);
int i = 0, j = 0;
 while (str[i] != '\0')
 {
 if (str[i] != ch)
 {
 str[j] = str[i];
 j++;
 }
 i++;
 }
 str[j] = '\0';
 printf("%s", str);
 return 0;
}
