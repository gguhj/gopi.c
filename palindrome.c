#include<stdio.h>  
void main()
{ 
    int a,b=0,c,d;
    scanf("%d",&a);
    while(a!=0)
    {
        c=a%10;
        b=b*10+c;
        a/=10;
    }
    {
    if(d==b)
    printf("palindrome");
    else
    printf("not");
}
}   
