#include<iostream>
using namespace std;

bool checkEqual(int count1[26], int count2[26]){
    for (int i = 0; i < 26; i++){
        if (count1[i] != count2[i]){
            return 0;
        }
    }
    return 1;
}
 
int main() {
    string s1 ;
    cout<<"enter the 1st string : ";
    cin>>s1;
    cout<<endl;

    string s2 ;
    cout<<"enter the 2st string : ";
    cin>>s2;
    cout<<endl;

    int count1[26] = {0};
    //s1 ki character ke count ko count1 array me store kr liya jo search krne h s2 me
    for(int i = 0; i < s1.length();i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 in the window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    
    // running for first window
    while(i<windowSize && i < s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if ( checkEqual( count1, count2)){
        cout<<"found";
        return 1;
    }

    // aage window process kr 
    while (i < s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if ( checkEqual( count1, count2)){
            cout<<"found";
            return 1;
        }

    }

    return 0;
}