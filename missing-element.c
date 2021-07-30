#include<stdio.h>
#include<stdlib.h>
int MissingNo(int arr[],int n)
{
    int i,sum,total=0;
    for(i=0;i<n-1;i++)
    {
        total += arr[i];
    }
    sum =n*(n+1)/2;
    sum -=total;
    return sum;
}
int main()
{
    int n,i,a[n];
    printf("N =");
    scanf("%d",&n);
    printf("A[] =");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int miss = MissingNo(a,n);
    printf("%d",miss);
}