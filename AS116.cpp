/*6. Write a function to print all Prime numbers between two given numbers. (TSRN)*/
#include<stdio.h>
int firstprime(int a,int b)
{
    int i,n;
    for(i=a;i<=b;i++)
    {
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            break;
        }
        if(n==i){
        printf("%d ",n);
        }
    }
}
int main()
{
    int n,m;
    printf("Enter two number to print first prime no :");
    scanf("%d%d",&n,&m);
    firstprime(n,m);
    return 0;
}