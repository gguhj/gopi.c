#include <stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d",&a,&b);
  printf("enter the odd number between two interval \n");
  for(c=a;c<=b;c++)
  {
  if(c%2==1)
  printf("%d \n",c);
}
}

