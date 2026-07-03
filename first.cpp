#include<iostream>
using namespace std;
 
int main() {
    //*******************************Q1 */

    // int a=9;

    // if (a==9) {cout<<"niney";}
    
    // if (a>0) {cout<<"positive";}

    // else {cout<<"negative ";}

    //******************Q2 */

    // int a=2;
    // int b=a+1;

    // if ((a=3)==b){cout<<a;}
    // else {cout<<a+1;}


    //******************Q3 */
    // int a=24;

    // if (a>20){cout<<"love";}
    // else if (a==24) {cout<<"lovely";}
    // else {cout<<"babbar";}
    int n;
    cout<<"enter the value of small , big alphabet or 0 to 9 no.";
    cin>>n;
    if (n<9){cout<<"number";}
    else if (n<97){cout<<"lowercase alphabet";}
    else {cout<<"uppercase alphabet";}

    return 0;
}