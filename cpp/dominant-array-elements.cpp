// Codewars Kata: Dominant Array Elements
// https://www.codewars.com/kata/5a04133e32b8b998dc000089/train/cpp
#include <iostream>
#include <vector>

std::vector<int> solve(std::vector<int> array) 
{
    std::vector<int> dominant;
    for (int i = 0; i < array.size(); i++) 
    {
        int test = 0;
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[j] >= array[i])
            {
                test += 1;
                break;
            }
        }
        if (test == 0) 
        {
            dominant.push_back(array[i]);
        }
    }
    return dominant;
}

int main()
{
    std::vector<int> arr = {92,52,93,31,89,87,77,105};
    
    for (int i: solve(arr)) 
    {
        std::cout << i << " ";
    }
}
