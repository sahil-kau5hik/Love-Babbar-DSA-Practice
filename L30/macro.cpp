#include<iostream>
using namespace std;

//object-like macro
#define PI 3.14
 
//function like macro
#define print(x) cout<<"value is : "<<x<<endl

//conditional-like macro
#define s 2

//predefined macro
//-> __LINE__ , __FILE__ , __DATE__ , __TIME__ 

int main() {
    int r = 5;
    // double pi = 3.14;
    double area = PI * r * r ;
    cout<<"area of circle is : "<<area<<endl;

    int VALUE = 5;
    print(VALUE);
    cout<<endl;

    // Display the current line number and the source file name
    cout << "This is line " << __LINE__ << " in file "<< __FILE__ << "\n";

    // Display the compilation date and time 
    cout << "Compiled on " << __DATE__;
    cout<<endl;
    cout << "Compiled on " << __TIME__;

    return 0;
}