#include<iostream>
using namespace std;

void update(int** p2){
    // p2 = p2 + 1;              // -> nothing changed
    //isse kuch hoga?

    // *p2 = *p2 + 1;              // change value of p
    //isse kuch hoga?

    **p2 = **p2 + 1;            // change value of i from 5 to 6;
    //isse kuch hoga?
}
 
int main() {
    int i  = 5;
    int* p = &i;
    int** p2 = &p;

    // cout<<"Printing P : "<< p<<endl;
    // cout<<"address of P : "<< p2<<endl;
    // cout<<"address of P : "<< &p<<endl;

    cout<<"before : "<<i<<endl;
    cout<<"before : "<<p<<endl;
    cout<<"before : "<<p2<<endl;

    update(p2);

    cout<<"after : "<<i<<endl;
    cout<<"after : "<<p<<endl;
    cout<<"after : "<<p2<<endl;
    
    return 0;
}