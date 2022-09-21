// Code Chef: Maximise the Subsequence Sum
// https://www.codechef.com/LP1TO204/problems/SIGNFLIP

#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    std::vector<int> v;
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    int sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            v[i] = abs(v[i]);
        }
        if (v[i] > 0)
        {
            sum += v[i];
        }
    }
    std::cout << sum << '\n';
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