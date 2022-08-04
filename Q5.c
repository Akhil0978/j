#include<stdio.h>
int sum (int);
int main()
{
    int x,y;
    printf("Enter the value of n : ");;
    scanf("%d",&x);
    y=sum(x);
    printf("The sum is %d ",y);
    return 0;
}
int sum (int n)
{
   if(n==1)
    return (1);
   n%10+sum(n/10);
   return n%10+sum(n/10);
}
