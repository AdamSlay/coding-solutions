// CodeChef: Problem Category - Pracrice Problem
// https://www.codechef.com/submit/PROBCAT
#include <iostream>
using namespace std;

void category()
{
    int n;
    cin >> n;
    if (n < 100)
    {
        cout << "Easy" << endl;
    }
    else if (n < 200)
    {
        cout << "Medium" << endl;
    }
    else
    {
        cout << "Hard" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        category();
    }
    return 0;
}
