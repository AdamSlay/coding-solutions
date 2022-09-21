// CodeChef: Chocolate Monger
// https://www.codechef.com/LP1TO204/problems/CM164364

#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    int n, x;
    std::cin >> n >> x;
    std::vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
    int size = v.size();  // num of unique
    int dupes = n - size; // total - unique
    if (dupes >= x)
    {
        std::cout << size << '\n';
    }
    else
    {
        x -= dupes;
        std::cout << size - x << '\n';
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