// CodeChef: Two Dishes - Practice Problem
// https://www.codechef.com/submit/TWODISH

#include <iostream>

void dishes()
{
    int n, fruit, veg, fish;
    std::cin >> n >> fruit >> veg >> fish;
    if ((veg >= n) && (fruit + fish >= n))
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
    int t;
    std::cin >> t;
    while (t--)
    {
        dishes();
    }
}
