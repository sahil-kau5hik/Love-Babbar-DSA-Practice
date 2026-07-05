#include<iostream>
using namespace std;


//global variable
int sum = 0;

//sharing between functions : 1) by reference variable -> good approach
//                            2) by global variable -> bad approach bcz any function change their value and then effect on others

void func(int& a){
    a++;
    cout<<a<<endl;
}

void fun(int& b){
    b--;
    cout<<b<<endl;
}
 
int main() {
    int a = 5;
    int b = 7;
    func(a);
    fun(b);
    return 0;
}