//Fibonacci sequence using recursion function
#include<stdio.h>
int fib(int n);
int main()
{
    int n,i,f;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        f=fib(i);
        printf("%d, ",f);
    }
    return 0;
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
