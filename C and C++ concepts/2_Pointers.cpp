#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;        //four bytes
    //char x;                    //Padding is done here//it will have 4 bytes but use only one byte. 
};

int main()
{
    // int a=10;
    // int *p;
    // p=&a;

    // printf("%d\n",a);
    // cout<<"Address of a in pointer p is "<<p<<endl;
    // cout<<"Address of a is " <<&a<<endl;
    // int A[5]={2,15,4,3,5};
    // int *p;
    // p=A;
    // p=&A[0];
    // for(int i=0;i<5;i++)
    // cout<<p+i<<endl;


    // creating array in heap
    
    // int *p;

    // //p=new int[5];    // heap memory allocation in cpp
    // p=(int *)malloc(5*sizeof(int));

    // p[0]=10; p[1]=15; p[2]=18; p[3]=20; p[4]=25;
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    //     cout<<p+i<<endl;
    // }
    // //delete [ ] p;       // deallocating memory in cpp for array
    // free(p);            // deallocating memory in c

    // size of pointers
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}