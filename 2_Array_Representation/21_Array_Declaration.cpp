#include<iostream>
using namespace std;



int main(){
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // Declaring Array using different syntax
    
    int A[5];
    int B[5]={1,2,3,4,5};
    int C[5]={2,4,8};
    int D[5]={0};
    int E[]={2,4,6,8,10,12};

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // Accessing elements of an Array

    // traversing
    for(int i=0;i<5;i++){
        printf("%d ",A[i]);  // this will produce garbage value as its elements are not initialized yet
        printf("%u \n",&A[i]);  // address will be shown here, contigious memory location
    }
    for(int i=0;i<5;i++){
        printf("%d ",B[i]);  // this will produce garbage value as its elements are not initialized yet
        printf("%u \n",&B[i]);
        // printf("%d \n",i[B]);
        // printf("%d \n",*[B+i]);
    }

    return 0;
}