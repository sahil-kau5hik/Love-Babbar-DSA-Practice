#include<iostream>
using namespace std;

// reverse a string using recursion 

//passing two pointer
void reverseString(string& str,int s,int e){
    //base case
    if(s>e){
        return ;
    }

    //processing part
    swap(str[s],str[e]);
    s++;e--;

    // recursive call 
    reverseString(str,s,e);
}

//passing one pointer
void reverseString(string& str,int s){
    //base case
    if(s>(str.length()-s-1)){
        return ;
    }

    //processing part
    swap(str[s],str[str.length()-s-1]);
    s++;

    // recursive call 
    reverseString(str,s);
}
 
int main() {
    string str = "abcdef";
    // reverseString(str,0,str.length()-1);
    // reverseString(str,0);
    cout<<"reverse of str is : "<<str<<endl;  
    return 0;
}