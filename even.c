
#include <stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d",&a,&b);
  printf("enter the even number between two interval \n");
  for(c=a;c<=b;c++)
  {
  if(c%2==0)
  printf("%d \n",c);
}
}

