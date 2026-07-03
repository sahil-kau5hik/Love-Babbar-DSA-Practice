#include <iostream>
using namespace std;

int AP(int n){
    return (3*n +7);
}

int fib(int n){
    if (n==1){return 0;}
    else if (n==2){return 1;}
    else {return fib(n-1)+fib(n-2);}
}

int bit(int n){
    int count=0;
    while(n!=0){
        int bit = n&1;
        if (bit==1){count++;}
        n = n>>1;
    }return count;
}

int main()
{   /* ******************************************HW 1*********************
    int a,c,b, money = 1330;
    while (money != 0)
    {
        switch (money)
        {
        case 1330 :
            a = money / 100;
            cout << "100rs notes = " << a <<endl;
            money = money - a*100;
            break;
        case 30 :
            b = money / 20;
            cout << "20rs notes = " << b <<endl;;
            money = money-b*20;
            break;    
        case 10 :
            c = 10 / 1;
            cout << "1rs notes = " << c <<endl;;
            money = money-c*1;
            break;
        }        
    }
    */

    /* *****************************find AP nth term whwre AP = (3*n + 7)*************************************
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;
    int b = AP(n);
    cout<<"The "<<n<<"th term is "<<b;

    */

    /* ****************************************************nth term of fibonacci series **************************
    int n;
    cout<<"Which term you want : ";
    cin>>n;
    int c = fib(n);
    cout<<n<<"th term is : "<<c<<endl;
    */

    /* ************************************************* find number of set bits in a and b  **********************
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout << "The total set bits in a and b are : "<<bit(a) + bit(b)<<endl;
    */ 

    return 0;
}