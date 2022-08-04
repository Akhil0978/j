#include<stdio.h>
int power(int , int);
int main()
{
    int base , expo;
    printf("Enter the base ");
    scanf("%d",&base);
    printf("Enter the exponent ");
    scanf("%d",&expo);
    printf("Power(%d*%d) = %d\n",base,expo,power(base,expo));
    return 0;
}
int power( int b, int e)
{
    if(e==0)
        return 1;
    else
        return(b*power(b,e-1));
}
