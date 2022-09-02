// CodeChef: Wildcard Matching - Practice Problem
#include <iostream>

void solve()
{
    std::string a,b; std::cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '?' && b[i] != '?' && a[i] != b[i])
        {
            std::cout << "no" << "\n";
            return;
        }
    }
    
    std::cout << "Yes" << "\n";
}

int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        solve();
    }
}
