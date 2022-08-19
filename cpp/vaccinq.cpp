// CodeChef: Chef in Vaccination Queue - Practice Problem
// https://www.codechef.com/submit/VACCINQ

#include <iostream>
void solve()
{
    int n, p, x, y;
    std::cin >> n >> p >> x >> y;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int s;
        std::cin >> s;
        if (i < p)
        {
            if (s < 1)
            {
                sum += x;
                continue;
            }
            sum += y;
        }
    }
    std::cout << sum << "\n";
}
int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        solve();
    }
}
