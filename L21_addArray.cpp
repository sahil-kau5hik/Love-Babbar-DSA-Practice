#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
 
int main() {
    int arr1[3] = {9,3,2};
    int arr2[3] = {9,9,4};
    int n = 3;
    int i = n-1;
    int j = n-1;
    int carry = 0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;j--;
    }

    while(i>=0){
        int val1 = arr1[i];
        int sum = val1 +  carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int val2 = arr2[j];
        int sum = val2 +  carry;

        carry = sum/10;
        sum = sum&10;
        ans.push_back(sum);
        j--;
    }

    while(carry !=0){
        int sum =  carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans);

    // for(int i = 0; i < ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    // int s = 0; 
    // int e = n;
    // for(int i = 0; i<ans.size(); i++){
    //     int temp = ans[s];
    //     ans[s] = ans[e];
    //     ans[e] = temp;
    //     s++;
    //     e--;
    // }
    return 0;
}