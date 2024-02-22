#include<stdio.h>
int sod(int n){
    if (n==0){
        return 0;
    }
    else{
        int a= n%10;
        return a*a + sod(n/10);
    }
}
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    int sum = sod(n);
    printf("Sum = %d",sum);
    return 0;
}