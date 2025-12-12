#include<stdio.h>
#include<stdbool.h>

void swap(int* xp, int* yp){
    int temp=*xp;
    *xp = *yp;
    *yp=temp;

}

void printArr(int n,int *arr ){
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("]");

    
   
}

void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n-i-1 ; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }


        if (swapped == false)
            break;
    }
}

int main(){

    int arr[10]={23,65,67,58,33,123,64,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArr(n,arr);
    bubbleSort(arr,n);
    printArr(n,arr);
    return 0;
}