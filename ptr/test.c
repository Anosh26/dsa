#include<stdio.h>
#include<stdlib.h>


int main(){
    int num[]={1,2,3,4,5,6,7,8};

    int size = sizeof(num)/sizeof(*num);

    //int size_1 = sizeof(num)/sizeof(num*);

    printf("%d  \n %d",size);


    return 0;
}