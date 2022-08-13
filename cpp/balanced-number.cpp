// Codewars Kata: Balanced Number
// https://www.codewars.com/kata/5a4e3782880385ba68000018/train/cpp?collection=playing-with-numbers

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string balancedNum (unsigned long long int number)
{
    unsigned long long int n = number;
    vector<int> nums;

    while (n != 0)
    {
        nums.insert(nums.begin(), n % 10);
        n = n / 10;
    }
    
    unsigned int size = nums.size();
    int front = 0;
    int back = 0;
    if (size < 3)
    {
        return "Balanced";
    }
    if (size == 3)
    {
        if (nums[0] == nums[2])
        {
            return "Balanced";
        }
        else
        {
            return "Not Balanced";
        }
    }
    if (size % 2 == 0)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            if (i < ((size / 2) - 1))
            {
                front += nums[i];
            }
            if (i > ((size / 2)))
            {
                back += nums[i];
            }
        }
    }
    else
    {
        for (unsigned int i = 0; i < size; i++)
        {
            if (i < (size / 2) + 1)
            {
                front += nums[i];
            }
            if (i > (size / 2) + 1)
            {
                back += nums[i];
            }
        }
    }
    if (front == back)
    {
        return"Balanced";
    }
    return "Not Balanced";
}

int main()
{
    unsigned long long n = 424;
    cout << balancedNum(n);
}
