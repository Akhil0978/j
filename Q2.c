#include<stdio.h>
int odd (int);
int main()
{
    int x,y;
    printf("Enter the value of n : ");;
    scanf("%d",&x);
    y=odd(x);
    printf("The sum is %d ",y);
    return 0;
}
int odd (int n)
{
   if(n==1)
    return (1);
   (2*n-1)+odd(n-1);
   return (2*n-1)+odd(n-1);
}
