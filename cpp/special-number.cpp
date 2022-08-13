// Codewars Kata: Special Number
// https://www.codewars.com/kata/5a55f04be6be383a50000187

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string specialNumber (int number)
{
    vector<int> s;
    int n = number;
    while (n != 0)
    {
        s.push_back(n % 10);
        n /= 10;
    }

    for (unsigned int i = 0; i < s.size(); i++)
    {
        if (s[i] > 5)
        {
            return "NOT!!";
        }
    }
    return "Special!!";
}

int main()
{
    int n = 123452318;
    cout << specialNumber(n);
}
