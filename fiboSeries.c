#include<stdio.h>
int fibo(int);
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%d ", fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n==0 || n==1)
    return n;

    int res = fibo(n-1) + fibo(n-2);
    return  res;
}