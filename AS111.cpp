/*1. Write a function to calculate LCM of two numbers. (TSRS)*/
#include<stdio.h>
int lcm(int n,int m)
{
    int i;
    for(i=1;i<=n*m;i++)
    {
       if(i%n==0 && i%m==0)
            break;
    }
     return i;
}
int main()
{
    int n,m;
    printf("Enter a two  Numbers :");
    scanf("%d%d",&n,&m);
  printf("LCM is = %d", lcm(n,m)); 
    return 0;
}