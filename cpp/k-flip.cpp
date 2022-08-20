// This was a part of CodeChef Starters Competition
// August 17, 3 hours
// K-Flip
// https://www.codechef.com/START52D?order=desc&sortBy=successful_submissions

#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
    int n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    for (int i = 0; i < (n-k+1); i++)
    {
        if (s[i] == '1')
        {
            for (int j = 0; j < k; j++)
            {
                s[i+j] == '1' ? s[i+j] = '0': s[i+j] = '1';
            }
        }
    }
    std::cout << s << "\n";
}

int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        solve();
    }
}
