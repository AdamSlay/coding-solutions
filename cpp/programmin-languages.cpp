// CodeChef: Programming Languages - Practice Problem
// https://www.codechef.com/submit/PROGLANG

#include <iostream>
using namespace std;

void lang()
{
    int a , b , a1, b1, a2, b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    if ((a1 == a || b1 == a) && (a2 == b || b2 == b))
    {
        cout << 1 << endl;
    }
    else if ((a2 == a || b2 == a) && (a2 == b || b2 == b))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    

}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        lang();
    }
}
