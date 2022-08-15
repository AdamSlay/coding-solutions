// CodeChef: Richie Rich - Practice Problem
// https://www.codechef.com/submit/CHFRICH
#include <iostream>
using namespace std;
void richie()
{
    int a, b, x;
    cin >> a >> b >> x;
    if ((b - a) % x > 0)
    {
        cout << ((b - a) / x) + 1 << endl;
    }
    else
    {
        cout << ((b - a) / x) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        richie();
    }
}
