// CodeChef: Two Trains - Aug22
// https://www.codechef.com/AUG221D/problems/TWOTRAINS

#include <iostream>
using namespace std;

void two_trains()
{
    int n;
    cin >> n;
    int max = 0;
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        s += a;
        if (a > max)
        {
            max = a;
        }
    }
    cout << s + max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        two_trains();
    }
    return 0;
}
