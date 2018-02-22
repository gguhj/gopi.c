#include <stdio.h>

int main()
{
   int a,b=0,i;
   scanf("%d",&a);
   for(i=0;i<=a;i++)
   {
       if(a%i==0)
       b++;
   }
  if(b==2)
  printf("prime number");
  else
  printf("not");
}
