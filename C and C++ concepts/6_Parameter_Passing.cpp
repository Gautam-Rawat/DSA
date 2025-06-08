#include<iostream>

using namespace std;
//Call By Value Parameter passing
// int add(int a,int b){
//     int c;
//     c=a+b;

//     return c;
// }
// int main(){
//     int num1=10, num2=15, sum;
    
//     sum= add(num1, num2);
//     cout<<"Sum is"<<sum<<endl;
    
//     return 0;
// }

// 

//Call by Reference Parameter passing(Only in C++)
int swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main(){
    int num1=10, num2=15;
    swap(num1, num2);

    cout<<"First Number"<<num1<<endl;
    cout<<"Second Number"<<num2<<endl;
}