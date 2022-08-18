// My attempt at CodeChef Starters Competition 
// August 17, 3 hours
// Minimum Sum
// https://www.codechef.com/START52D?order=desc&sortBy=successful_submissions

#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
    int n; std::cin >> n;
    std::vector<int> v;
    int sum = 0;
    while (n--)
    {
       int x;
       std::cin >> x;
       sum += x;
       v.push_back(x);
    }
    int size = v.size();
    std::sort(v.begin(), v.end());
    bool found;
    found = false;
    int diff;
    for (int i = 0; i < size; i++)
    {
        if (found)
        {
            break;
        }
        for (int j = size - 1; j > i; j--)
        {
            if (v[j] % v[i] == 0)
            {
                v[j] = v[i];
                diff = v[j] - v[i];
                found = true;
                break;
            }
        }
    }
    std::cout << sum - diff << "\n";
}


int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
}
