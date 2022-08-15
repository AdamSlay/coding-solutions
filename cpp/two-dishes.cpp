// CodeChef: The Two Dishes - Practice Problem
// https://www.codechef.com/submit/MAX_DIFF
#include <iostream>
void max_diff()
{
    int max_per, total; std::cin >> max_per >> total;
    if (max_per >= total)
    {
        std::cout << total << "\n";
    }
    else
    {
        std::cout << max_per - abs(max_per - total) << "\n";
    }

}
int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        max_diff();
    }
}
