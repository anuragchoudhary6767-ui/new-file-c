#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("enter,%d elements: ",n);
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);
        free(arr);
    return 0;
}