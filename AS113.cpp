/*3. Write a function to check whether a given number is Prime or not. (TSRS)*/
#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2; ;i++)
    {
        if(n%i==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    if(prime(a))
    printf("Given number is prime ");
    else
    printf("Given number is not a prime :");
    return 0;
}