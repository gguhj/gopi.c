#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d",&a);
    while(a!=0)
    {
        a/=10;
        b++;
    }
        printf(" %d",b);
}
