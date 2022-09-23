// CodeChef: Chopsticks
// https://www.codechef.com/LP1TO204/problems/TACHSTCK

#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    std::vector<int> v;
    int n, d;
    std::cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int chops = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = v[i] - v[i - 1];
        if (diff <= d)
        {
            chops += 1;
            i++;
        }
    }
    std::cout << chops << '\n';
}

int main()
{
    solve();
}