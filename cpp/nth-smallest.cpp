// Codewars Kata: Nth Smallest Element
// https://www.codewars.com/kata/5a512f6a80eba857280000fc/train/cpp

#include <iostream>
#include <vector>
#include <algorithm>
int nthSmallest(std::vector<int> passed, int nSmallest) 
{
    std::sort(passed.begin(), passed.end()); 
    return passed[nSmallest-1];
}


int main()
{
    std::vector<int> nums = {15,20,7,10,4,3};
    int n = 3;
    std::cout << nthSmallest(nums, n);
}
