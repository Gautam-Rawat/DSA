#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;



int main(){
    int A[5]={2,4,6,8,10};      // This array is allocated in stack memory
    int *p;   // to access heap we must use pointer to point the heap memory
    int i;
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// Allocating Memory in heap
// using c++
    p=new int[5];
// using c
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    for( i=0;i<5;i++){
        printf("%d ",A[i]);
    }

    printf("\n");
    for(i=0;i<5;i++){
        printf("%d ",p[i]);
    }

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // To free memory from heap to avoid storage leak
// using c++
    // delete []p;
// using c
    free(p);
    return 0;
}