#include<stdio.h>
int HCF (int , int);
int main()
{
    int a,b,y;
    printf("Enter first no. : ");;
    scanf("%d",&a);
    printf("Enter second no. : ");;
    scanf("%d",&b);
    y=HCF(b,a%b);
    printf("The HCF is %d ",y);
    return 0;
}
int HCF (int n,int o)
{
    if(o==0)
        return n;
    HCF(o,n%o);
}

