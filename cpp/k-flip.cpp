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
    std::string bin; std::cin >> bin;
    for (int i = 0; i < (n-k+1); i++)
    {
        if (bin[i] == '1')
        {
            for (int j = 0; j < k; j++)
            {
                bin[i+j] == '1' ? bin[i+j] = '0': bin[i+j] = '1';
            }
        }
    }
    std::cout << bin << "\n";
}

int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        solve();
    }
}
