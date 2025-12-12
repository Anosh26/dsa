#include<stdio.h>


void insertionSort(int* arr,int n){
    int key;
    int j;
    for(int i=0;i<n;i++){
        key=arr[i];
        for(j=i-1;j>=0&&arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }   
}


void printArr(int *arr ,int n){
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("]\n");
}
int main(){

    int arr[10]={23,45,1,64,73,8,1,6,0,1};
    int arrLen=sizeof(arr)/sizeof(arr[0]);
    printf("Array Before Sorting\n");
    printArr(arr,arrLen);
    printf("\nArray After Sorting\n");
    insertionSort(arr,arrLen);
    printArr(arr,arrLen);
    

    return 0;
}