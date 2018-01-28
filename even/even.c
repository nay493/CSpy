#include<stdio.h>
int main()
{
int n;
printf("n=\n");
scanf("%d",&n);
n%2==0?printf("Even\n"):printf("Odd\n"); // Note: No semicolon after first printf
return 0;
}
