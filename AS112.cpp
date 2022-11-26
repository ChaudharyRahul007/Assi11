/*2. Write a function to calculate HCF of two numbers. (TSRS)*/
#include<stdio.h>
int hcf(int n,int m)
{
    int h;
    for(h=n<m?n:m;h>=1;h--)
    {
        if(n%h==0 && m%h==0)
          break;
    }
    return h;
}
int main()
{
    int a,b;
    printf("Enter A two number :");
    scanf("%d%d",&a,&b);
    printf("HCF is = %d",hcf(a,b));
    return 0;
}