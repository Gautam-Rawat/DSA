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



// int fun(int n){
//     static int x=0;
//     // printf("%d",x);
//     if(n>0){
//         x++;                    // the value of the static variable x will not change with every recursion
//                                 // x -> 0, 1, 2, 3, 4, 5
//         return fun(n-1)+x;
//     }
//     return 0;
// }
// int main(){
//     int a=5;
//     printf("%d\n",fun(a));
//     printf("%d",fun(a));        // this time the function will not initialized as 0 but as 5 it was previous called

//     return 0;
// }
// the result is different



// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// now we check for global variable

int x=0;

int fun(int n){
    // static int x=0;
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
    printf("%d",fun(a));        // this time the function will not initialized as 0 but as 5 it was previous called

    return 0;
}
//  we see that in both static and global variable example we saw the values are not reseting even if we recall the function
//  static and global variable are not stored in stack memory 
//  they are stored along with program