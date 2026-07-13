#include<iostream>
using namespace std;

// check palindrome number number by recursion 

bool checkPalindrome(string& str,int s,int e){
    //base case
    if(s>e){
        return 1;
    }

    if(str[s] == str[e]){
        s++;e--;
        return checkPalindrome(str,s,e);
    }
    else{
        return 0;
    }
}

 
int main() {
    string str = "abcdcba";
    bool ans = checkPalindrome(str,0,str.length()-1);
    if(ans){
        cout<<"palindrome number"<<endl;
    }
    else{
        cout<<"not a palindrome number"<<endl;
    }
    return 0;
}