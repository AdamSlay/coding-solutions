// Code Chef: Smallest Pair - Practice Problem

#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
    std::vector<int> a;
    int n; std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        std::cin >> p;
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    std::cout << a[0] + a[1] << "\n";

}
int main(){
    int t; std::cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
