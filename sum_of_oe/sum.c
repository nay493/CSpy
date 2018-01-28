#include<stdio.h>

int main()
{
int n,sum_o=0,sum_e=0;
printf("n=\n");
scanf("%d",&n);

for(int i=0;i<=n;i++)
{
  i%2==0 ? (sum_e += i) : (sum_o += i);
}
printf("sum_e=%d\n",sum_e);
printf("sum_o=%d\n",sum_o);

return 0;
}
