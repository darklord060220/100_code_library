#include <stdio.h>

int main()
{
    int A[100],B[100],n,m,k,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=(n-1),k=0;j>=0;j--,k++)
    {
        B[j]=A[k];
    }
    for(l=0;l<n;l++)
    {
        A[l]=B[l];
    }
    for(m=0;m<n;m++)
    {
       printf("%d \t",A[m]);
    }
}
