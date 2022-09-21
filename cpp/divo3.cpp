// CodeChef: Daanish and Problems
// https://www.codechef.com/LP1TO204/problems/DIV03

#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    int k;
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    std::cin >> k;

    for (int i = 9; i >= 0; i--)
    {
        if (v[i] <= k)
        {
            k -= v[i];
        }
        else
        {
            std::cout << i + 1 << '\n';
            break;
        }
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