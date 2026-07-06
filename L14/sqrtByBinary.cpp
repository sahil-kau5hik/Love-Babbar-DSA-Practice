#include <iostream>
using namespace std;

long long int binarysearch(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;

    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double morePrecision(int x, int precision, int tempsol)
{
    double factor = 1;
    double ans = precision;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < x; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int x, p;
    cout<<"enter number : ";
    cin >> x;
    int tempsol = binarysearch(x);
    cout << tempsol << endl;
    cout<<"enter precise digit : ";
    cin >> p;
    double precise = morePrecision(x, p, tempsol);
    cout << precise << endl;
}
