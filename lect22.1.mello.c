#include <stdio.h>
#include <stdlib.h>
int main(){
    
int n;
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]='\0';
    printf("%s",arr);
        free(arr);
    return 0;
}