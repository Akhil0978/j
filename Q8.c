#include<stdio.h>
int fib(int n);
int main()
{
    int i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",fib(i));
    return 0;
}
int fib (int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1) + fib(n-2);
}
