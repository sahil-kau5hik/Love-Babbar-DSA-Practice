#include<iostream>
using namespace std;

//reference variable -> change in value of one variable can change value of 
//                      another variable because both point same memory location 

/*call by value -> isme variable ki copy create hote h changes ussi me hote h na ki original me 
void update(int n){
    n++;
    cout<<"value in function : "<<n<<endl;    // 6
}*/



//call by reference -> isme original variable ya block ka address bhejte h , 
//                    agar kuch update hoga to original me bhi change hoga.
void update(int& i){
    i++;
    cout<<"value in function : "<<i<<endl;    // 6
}

 
int main() {
    /*
    int i = 5;

    //create a reference variable

    int& j = i;

    cout<<" i : "<<i<<endl;
    cout<<" j : "<<j<<endl<<endl;

    cout<<"after i increment -> "<<endl;
    i++;
    cout<<" i : "<<i<<endl;
    cout<<" j : "<<j<<endl<<endl;

    cout<<"after j increment -> "<<endl;
    j++;
    cout<<" i : "<<i<<endl;
    cout<<" j : "<<j<<endl;
    */

    int i = 5;
    // int& j = i;

    cout<<"before function call  : "<<i<<endl;
    update(i);
    cout<<"after function call  : "<<i<<endl;


    return 0;
}