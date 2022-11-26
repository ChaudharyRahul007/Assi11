/*8. Write a function to print PASCAL Triangle. (TSRN)*/
#include<stdio.h>
int fact(int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
int cob(int a,int b)
{
    int c;
    c=fact(a)/(fact(b)*fact(a-b));
    return c;
}
void pascal(int p)
{
    int i,j;
    for(i=0;i<=p;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %d",cob(i,j));
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    pascal(n);
    return 0;
}