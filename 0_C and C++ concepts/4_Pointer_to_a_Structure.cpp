#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
}; 

int main(){
    // struct Rectangle r={10,5};
    // cout<<r.length<<endl;           // . for variable
    // cout<<r.breadth<<endl;

    // struct Rectangle *p=&r;
    // cout<<p->length<<endl;          // -> for pointer
    // cout<<p->breadth<<endl;

    // '''dynamic memory'''

    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;

    cout<<p->length<<endl;          // -> for pointer
    cout<<p->breadth<<endl;
    
    return 0;
}