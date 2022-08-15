// CodeChef: Maximum Length Even Subarray - Practice Problem
// https://www.codechef.com/submit/MXEVNSUB

#include <iostream>

void mx_len()
{
    int n; std::cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    if (sum % 2 == 0)
    {
        std::cout << n << "\n";
    }
    else
    {
        std::cout << n-1 << "\n";
    }
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        mx_len();
    }
}
