#include <bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// leetcode question 17

class Solution {
private:
    void solve(string digits,string output,int index,vector<string>& ans,string mapping[]){
        // base case
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        // digits wali string se first digit nikal liya 
        // uski ascii value milege then -'0' krke digit nikal lege
        int number = digits[index] - '0';
        // us digit ke corresponding mapping se string nikal lege
        string value = mapping[number];

        // traverse kr dege and after calculate usko vapis nikalege dusre value add krne ke liye
        // value wale string me jitne character hoge utne baar loop chlega
        for(int i = 0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mapping);
            output.pop_back();
        }
    }    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if(digits.length() == 0){
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapping);
        return ans;
    }
};