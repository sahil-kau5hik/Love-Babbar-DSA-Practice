#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"Source "<<src<<" Destination "<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"pouch gya"<<endl;
        return ;
    }

    //processing part
    src++;

    //recursive part
    reachHome(src,dest);

}
 
int main() {
    int src,dest;
    cout<<"enter the source : ";
    cin>>src;
    cout<<"enter the destination : ";
    cin>>dest;

    cout<<endl;

    reachHome(src,dest);
    return 0;
}