#include<iostream>
using namespace std;



int main(){
    
    // Array A is stored fully in stack memory
    int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
    // in Array B, the rows are stored in stack while the colounms/arrays are stored in heap
    int *B[3];
    // in Array C, every thing is stored in heap
    int **C;
    int i,j;

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}