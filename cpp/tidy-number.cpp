// Codewars Kata: Tidy Number
// https://www.codewars.com/kata/5a87449ab1710171300000fd

#include <iostream>
#include <string>

bool tidyNumber (int number)
{
    while (number != 0)
    {
        int dig = number % 10;
        number /= 10;
        if (dig < number % 10)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 1345798;
    std::cout << tidyNumber(n);
}
