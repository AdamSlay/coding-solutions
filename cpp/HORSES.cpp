// https://www.codechef.com/LP1TO204/problems/HORSES
// Created by chris on 9/3/2022.
// CodeChef: Racing Horses - Practice Problem

#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
    int n; std::cin >> n;
    std::vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int j; std::cin >> j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    int diff = v[n-1];
    for (int i = 0; i < (n-1); i++)
    {
        int curr = abs(v[i] - v[i+1]);
        if (curr < diff)
        {
            diff = curr;
        }
    }
    std::cout << diff << "\n";
}
int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        solve();
    }
}