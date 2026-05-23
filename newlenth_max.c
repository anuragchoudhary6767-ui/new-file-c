#include<stdio.h>
int main(){
    int arr[5]={0,1,2,32,0};
    int j=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int j=0;j<5;j++)
    printf("%d",arr[j]);
}