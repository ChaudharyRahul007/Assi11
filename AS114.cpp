/*4. Write a function to find the next prime number of a given number. (TSRS)*/
#include<stdio.h>
int nextprime(int n)
{
    int i,x;
    for(i=n+1; ;i++)
    {
        for(x=2;x<i;x++)
        {
            if(i%x==0)
            break;
        }
        if(i==x)
        break;
    }
    return i;
}
int main()
{
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    printf("Next Prime Number is %d",nextprime(x));
    return 0;
}