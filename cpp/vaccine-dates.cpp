// CodeChef: Vaccine Dates - Practice Problem
// https://www.codechef.com/submit/VDATES

#include <iostream>
using namespace std;

void vacc()
{
    int d,l,r;
    cin >> d >> l >> r;
    if (d <= r && d >= l)
    {
        cout << "Take second dose now" << endl;
    }
    else if (d > r)
    {
        cout << "Too Late" << endl;
    }
    else 
    {
        cout << "Too Early" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vacc();
    }
}
