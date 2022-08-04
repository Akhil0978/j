#include<stdio.h>
int sqr (int);
int main()
{
    int x,y;
    printf("Enter the value of n : ");;
    scanf("%d",&x);
    y=sqr(x);
    printf("The sum is %d ",y);
    return 0;
}
int sqr (int n)
{
   if(n==1)
    return (1);
   (n*n)+sqr(n-1);
   return (n*n)+sqr(n-1);
}

