// Codewars Kata: Disarium Number
// https://www.codewars.com/kata/5a53a17bfd56cb9c14000003

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
std::string disariumNumber (int number)
{
    int sum = 0;
    int num = number;
    std::vector<int> place;
    
    while (num != 0)
    {
        place.insert(place.begin(), (num % 10));
        num /= 10;
    }
    
    for (unsigned int i = 0; i < place.size(); i++)
    {
        sum += std::pow(place[i], i + 1);
    }
    
    return (sum == number ? "Disarium !!": "Not !!");
}

int main()
{
    int n = 1048576;
    std::cout << disariumNumber(n);
}
