#include<iostream>

using namespace std;

int main(){
    int a=10;
    int &r=a;           //must be initialized
    int b=25;
    r=b;                //here a is also asigned the value

    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
    cout<<&r<<": Address of r"<<endl;
    cout<<&a<<": Address of a"<<endl;
    cout<<&b<<": Address of b"<<endl;


    return 0;
}