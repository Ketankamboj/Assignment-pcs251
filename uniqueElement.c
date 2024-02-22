#include<stdio.h>

int findUnique(int  arr[], int n){
    int ans=0;
    for(int i=0 ;i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    printf("enter number of elements in array: ");
    scanf("%d",&n);

    int arr[10];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int uniqueElement = findUnique(arr,n);
    printf("%d",uniqueElement);
    return 0;
}