#include<stdio.h>


void selectionSort(int* arr,int n){
    for(int i=0;i<n;i++){
        int minInd=i;
        for(int j=i;j<n;j++){
            if(arr[minInd]>arr[j]){
                minInd=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minInd];
        arr[minInd]=temp;
    }
}


void printArr(int* arr,int n){
    
    printf("[");
    for(int i=0;i<n;i++){
        
        printf(" %d ,",arr[i]);
        
    }
    printf("]");
}

int main(){
    int arr[10]={10,34,6,2,6,7,2,1};
    int n=sizeof(arr)/4;

    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}