// Project Euler Problem: Multiples of 3 or 5
// https://projecteuler.net/problem=1
#include <iostream>

int mults(int n) 
{
    int sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if (i % 3 == 0 || i % 5 == 0) 
        {
            sum += i;
        }
    }
    return sum;
}

int main() 
{
    int n = 1000;
    std::cout << mults(n);
}

