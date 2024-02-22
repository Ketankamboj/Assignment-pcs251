#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter size of first array: ");
    scanf("%d",&a);
    printf("enter size of second array: ");
    scanf("%d",&b);
    
    printf("enter size of third array: ");
    scanf("%d",&c);

    int arr[a];
    int brr[b];
    int crr[c];

    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<b; i++){
        scanf("%d",&brr[i]);
    }

    for(int i=0; i<c; i++){
        scanf("%d",&crr[i]);
    }


    int i=0,j=0,k=0;
    while(i<a && j<b && k<c){
        if(arr[i] == brr[j] && brr[j] == crr[k]){
            printf("%d",arr[i]);
            i++,j++,k++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else if(brr[j]<crr[k]){
            j++;
        }
        else{
            k++;
        }
    }    
    return 0;
}