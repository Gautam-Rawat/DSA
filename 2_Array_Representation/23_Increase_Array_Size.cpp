#include<iostream>
using namespace std;



int main(){
    int *p,*q;
    int i;

    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    // Transfering element to larger size array to increase the size

    q=(int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    
    free(p);    // deallocating heap memory pointed by p
    p=q;        // assigning address to p of larger array
    q=NULL;
    
    for(i=0;i<5;i++)
        printf("%d \n", p[i]);
    
    
    return 0;
}