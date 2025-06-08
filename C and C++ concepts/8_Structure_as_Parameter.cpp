#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

// void fun(struct Rectangle r){
//     r.length=20;
//     cout<<"Length"<<r.length<<endl<<"Breadth"<<r.breadth<<endl;
// }

// void fun(struct Rectangle *pr){
//     pr->length=20;
//     pr->breadth=10;
//     cout<<"Length "<<pr->length<<endl<<"Breadth "<<pr->breadth<<endl;
// }

struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=10;
    p->breadth=7;


}
int main(){
    // struct Rectangle r={10,5};
    // // fun(r);
    // // printf("Length %d \nBreadth %d\n",r.length,r.breadth);
    // cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
    // fun(&r);
    // printf("Length %d \nBreadth %d\n",r.length,r.breadth);

    struct Rectangle *ptr=fun();

    cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;

    return 0;
}