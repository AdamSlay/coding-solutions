// CodeChef: Sticks
// https://www.codechef.com/LP1TO204/problems/STICKS

#include <vector>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    int x = 0;
    int y = 0;
    sort(v.begin(), v.end());
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] == v[i - 1] && x == 0)
        {
            x = v[i];
            i--;
        }
        if (x > 0 && v[i] == v[i - 1])
        {
            y = v[i];
            break;
        }
    }
    if (x > 0 && y > 0)
    {
        std::cout << x * y << '\n';
    }
    else
    {
        std::cout << -1 << '\n';
    }
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
}