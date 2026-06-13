#include <stdio.h>
int main(){
    a[5]={1,2,3,4,5};
    int s=0;
    int end=4;
    int t=4;
    while(s<=end){
        int mid=(s+end)/2;
        if(a[mid]==t){
        return mid;
        }
        else if(a[mid]<t){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    int main(){
        int arr[5]={1,2,3,4,5};
        int data=Bsearch(arr);
        printf("%d",data);
        return 0;
    }
}
