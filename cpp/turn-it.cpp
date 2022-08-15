// CodeChef: Turn It - Practice Problem
// https://www.codechef.com/submit/NFS

#include <iostream>
void turnit()
{
    int cur_vel, dist, max_vel, desc;
    std::cin >> cur_vel >> max_vel >> desc >> desc;
    // velocity at turn = cur_vel**2 - (2 * dist * desc)
    if (((cur_vel * cur_vel) - (2 * dist * desc) <= (max_vel * max_vel)) || (cur_vel <= max_vel))
    {
        std::cout << "YES" << "\n";
    }
    else
    {
        std::cout << "NO" << "\n";
    }
}
int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        turnit();
    }
}
