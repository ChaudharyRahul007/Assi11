/*5. Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>
int firstprime(int x)
{
    int i=2,n;
    while(x)
    {
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            break;
        }
        if(n==i){
        printf("%d ",n);
        x--;
        }
    i++;
    }
}
int main()
{
    int n;
    printf("Enter any number to print first prime no :");
    scanf("%d",&n);
    firstprime(n);
    return 0;
}