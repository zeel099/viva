#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
  
    int arr[n];
    printf("Enter array element :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);

    for(int j=0;j<n;j++){
        if(key == arr[j]){
            printf("Element is present at index no.",j);
        }
    }
}