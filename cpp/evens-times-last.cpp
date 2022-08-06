#include <vector>
#include <iostream>

int even_last(std::vector<int> nums) {
    int size = nums.size();
    if (size > 0) {
        int evens = 0;
        for (int i = 0; i < size; i+=2) {
            evens += nums[i];
        }
        return evens * nums[size-1];        
    }
    else {
        return 0;
    }
}

int main() {
    std::vector<int> vect = {2,3,4,5};
    std::cout<<even_last(vect);
}
