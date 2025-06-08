// Without using Static variable,
// we get the different result

#include<iostream>

using namespace std;

// int fun(int n){
//     if(n>0)
//         return fun(n-1)+n;
// }
// int main(){
//     int a=5;
//     printf("%d",fun(a));
//     return 0;
// }


// Now we add Static variable and 
// check the result using same code



int fun(int n){
    static int x=0;
    // printf("%d",x);
    if(n>0){
        x++;                    // the value of the static variable x will not change with every recursion
                                // x -> 0, 1, 2, 3, 4, 5
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int a=5;
    printf("%d\n",fun(a));
    printf("%d",fun(a));
    return 0;
}
// the result is different

