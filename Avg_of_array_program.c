#include <stdio.h>
int main(void)
{
 int n;
 scanf("%d", &n);
 if (n <= 0)
 return 0;
 int arr[n];
 for (int i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 int *ptr = arr;
 long long sum = 0;
 for (int i = 0; i < n; i++)
 {
 sum += *ptr; 
 ptr++; 
 }
double average = (double)sum / n;
 printf("%.2f\n", average);
 return 0;
}
