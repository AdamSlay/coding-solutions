#include <vector>
#include <iostream>
#include <queue>

void solve()
{
    int n, k;
    k = 3;
    n = 13;
    std::string s = "1010011011010";
    std::vector<int>v(n, 0);
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - '0';
    }

    std::queue<int>q;
    for (int i = 0; i < n-k+1; i++)
    {
        while (q.size() > 0 and q.front() < i)
        {
            q.pop();
        }
        
        v[i] = (v[i] + q.size()) % 2;
        if (v[i] == 0)
        {
            continue;
        }
        v[i] = (v[i] + 1) % 2;
        q.push(i+k-1);
    }

    for (int i = n-k+1; i < n; i++)
    {
        while (q.size() > 0 and q.front() < i)
        {
            q.pop();
        }
        v[i] = (v[i] + q.size()) % 2;
    }
    std::string ans(n, '0');
    for (int i = 0; i < n; i++)
    {
        ans[i] = '0' + v[i];
    }
    std::cout << ans << "\n";
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
