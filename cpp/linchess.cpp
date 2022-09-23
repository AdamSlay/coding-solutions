// CodeChef: Chef and Linear Chess
// https://www.codechef.com/LP1TO204/problems/LINCHESS

#include <iostream>
#include <vector>

void solve()
{
    int n;
    std::cin >> n;
    int negs = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        if (a == 0)
        {
            negs = 0;
            break;
        }
        if (a < 0)
        {
            negs += 1;
        }
    }

    if (negs % 2 == 0)
    {
        std::cout << 0 << '\n';
    }
    else
    {
        std::cout << 1 << '\n';
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
