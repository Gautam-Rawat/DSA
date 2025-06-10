#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;        //four bytes
    char x;             //Padding is done here//it will have 4 bytes but use only one byte. 
}r1;
// r1 is a global variable defined along with structure.


int main(){
    struct Rectangle r2={10,4};

    r2.length=15;
    r2.breadth=7;

    // printf("%d", sizeof(r2));
    cout<<r2.length<<endl;
    cout<<r2.breadth<<endl;

    return 0;
}