#include<iostream>
using namespace std;

//default argument -> isme hm function ke bilkul right and last wale variable me variable ki default value set kr dete h
//                    jb hm iske koe value pass nahi krte to default wali use hoti h , 
//                    if value pass krte h to pass wali value ko use kr leta h


int sum(int a, int b, int c = 25){
    return a+b+c;
}
 
int main() {
    
    int a = 5;
    int b = 20;

    int s = sum(a,b);
    cout<<"sum is "<<s<<endl;
    
    int add = sum(a,b,5);
    cout<<"sum is "<<add<<endl;

    return 0;
}