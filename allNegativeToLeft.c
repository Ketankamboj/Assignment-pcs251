#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int start=0,end=n-1,i=0;
    while(i!=end){
        if(arr[i]<0){
            int t = arr[i];
            arr[i] = arr[start];
            arr[start] = arr[i];
            i++;
            start++;
        }
        else{
            int t = arr[i];
            arr[i] = arr[end];
            arr[end] = t;
            end--;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}