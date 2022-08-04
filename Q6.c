#include<stdio.h>
int fact(int);
int main()
{
    int x,y;
    printf("Enter the value of n : ");;
    scanf("%d",&x);
    y=fact(x);
    printf("The sum is %d ",y);
    return 0;
}
int fact (int n)
{
   if(n==1)
    return (1);
   n*fact(n-1);
   return n*fact(n-1);
}
