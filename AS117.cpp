/*7. Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
void fibonacci(int x)
{
    int i,pre=0,cur=1,next=0;
    for(i=1;i<=x;i++)
    {
        next=pre+cur;
        printf("%d ",next);
        pre=cur;
        cur=next;
    }
}
int main()
{
    int n;
    printf("Enter any number to print fibonacci series :");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}