#include<iostream>
using namespace std;

char getMaxOccurence(string s){
    char arr[26] = {0};
    int number = 0;
    for(int i = 0; i < s.size(); i++){
        int ch = s[i];
        if(ch >= 'a' && ch <='z'){
            number = ch - 'a';
        }
        else {
            number = ch - 'A';
        }

        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}

char toLowerCase(char ch){
    if((ch>='a' && ch <= 'z') || (ch>='0' && ch <= '9')){
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char ch[],int n){
    int s = 0;
    int e = n-1;
    while( s < e){
        if (toLowerCase(ch[s++]) != toLowerCase(ch[e--])){
            return 0;
        }
    }
    return 1;
}

void reverse(char ch[], int n){
    int s = 0;
    int e = n-1;
    while( s <= e){
        swap(ch[s++],ch[e--]);
    }
}

int getLength(char ch[]){
    int len = 0;
    for (int i = 0; ch[i] != '\0';i++){
        len++;
    }
    return len;
}
 
int main() {
    char ch[20];

    cout<<"enter your name : ";
    cin>>ch;

    cout<<ch<<endl;

    int length = getLength(ch);
    cout<<"length is : "<<length<<" "<<endl;

    // reverse(ch,length);
    // cout<<ch<<endl;

    // cout<<"it is palindrome or not : "<<checkPalindrome(ch,length)<<" "<<endl;

    cout<<getMaxOccurence(ch);
    return 0;
}