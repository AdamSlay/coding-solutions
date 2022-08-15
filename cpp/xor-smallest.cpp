// CodeChef: XOR with Smallest Element - Aug22long
// https://www.codechef.com/AUG221D/problems/SMALLXOR
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void xor_smol()
{
    // n = len(arr)
    // x = XOR number
    // y = iterations
    int n, x, y;
    cin >> n >> x >> y;
    
    // get the vector
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        a.push_back(inp);
    }

    // find min val in v
    // XOR with x
    // change min(arr) -> XOR x
    // repeat y times
    for (int j = 0; j < y; j++)
    {
        int m = *min_element(a.begin(), a.end());
        int xr = m ^ x;
        for (int k = 0; k < n; k++)
        {
            if (a[k] == m)
            {
                a[k] = xr;
                break;
            }
        }
    }
    sort(a.begin(), a.end());
    for (int i: a)
        cout << i << " ";
    cout << endl;

    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        xor_smol();
    }
    return 0;
}
