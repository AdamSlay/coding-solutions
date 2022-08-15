// Code Chef intro
// https://www.codechef.com/problems-old/FLOW001?itm_medium=getting-started&itm_campaign=page
#include <iostream>
#include <vector>
int add(int a, int b) 
{
    return a + b;
}

int main()
{
    int t;
    std::cin >> t;
    std::vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int number;
        std::cin >> number;
        v.push_back(number);
    }
    std::cout<<t;

}
