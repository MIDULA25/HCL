#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
 char str[1000];
 fgets(str, sizeof(str), stdin);
 int left = 0;
 int right = strlen(str) - 1;
 while (left < right)
 {
 
 while (left < right && !isalnum((unsigned char)str[left]))
 left++;
 while (left < right && !isalnum((unsigned char)str[right]))
 right--;

 if (tolower((unsigned char)str[left]) != 
 tolower((unsigned char)str[right]))
 {
 printf("Not Palindrome\n");
 return 0;
 }
 left++;
 right--;
 }
 printf("Palindrome\n");
 return 0;
}