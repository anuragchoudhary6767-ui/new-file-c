#include <stdio.h>
int main(){
    int n=5;
    for(int i=4;i>=n;i++){
        for(int j=1;j<=n;j++){
            // printf("*");
            if(i==1 || j==1 || i==n || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
 }   