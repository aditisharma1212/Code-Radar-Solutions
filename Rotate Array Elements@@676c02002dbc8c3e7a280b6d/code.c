#include<stdio.h>
int main(){
    int arr[5]={2,5,6,8,9};
    int i,j,temp,k=3,n=5;
    while(k>0){
        temp=arr[n-1];
        for(i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        k--;
    }
    for(j=0;j<n;j++){
        printf("%d",arr[j]);
    }
}