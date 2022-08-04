#include<stdio.h>
int even (int);
int main()
{
    int x,y;
    printf("Enter the value of n : ");;
    scanf("%d",&x);
    y=even(x);
    printf("The sum is %d ",y);
    return 0;
}
int even (int n)
{
   if(n==1)
    return (2);
   (2*n)+even(n-1);
   return (2*n)+even(n-1);
}
