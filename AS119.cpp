/*9. Write a program in C to find the square of any number using the function*/
#include<stdio.h>
void square(int a)
{
    
    printf(" Square is = %d",a*a);
}
int main()
{
    int n;
    printf("Enter any number to find the squar :");
    scanf("%d",&n);
    square(n);
    return 0;
}