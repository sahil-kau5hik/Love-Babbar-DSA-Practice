#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> &arr){
    int s = 0;
    int e = arr.size() - 1;
    while(s < e){
        swap(arr[s++],arr[e--]);
    }
    return arr;
}

void print(vector<int> v){
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}
 
int main() {
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    print(v);

    vector<int> ans = reverse(v);

    cout<<"Printing the reverse array : " <<endl;
    print(v);

    return 0;
}