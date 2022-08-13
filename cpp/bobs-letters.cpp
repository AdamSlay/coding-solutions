// Codewars Kata: Help Bob Count Letters and Digits
// https://www.codewars.com/kata/5738f5ea9545204cec000155/train/cpp

#include <iostream>
#include <ctype.h>
#include <vector>
int countLettersAndDigits(std::string input)
{
    std::vector<char> temp;
    int count = 0;
    for (unsigned int i = 0; i < input.size(); i++)
    {
        int already = 0;
        for (unsigned int j = 1; j < temp.size(); j++)
        {
            if (input[i] == temp[j])
            {
                 already = 1;
                 break;
            }
        }
        if ((already == 0) && ((isalpha(input[i])) || (std::isdigit(input[i]))))
        {
            count += 1;
            temp.push_back(input[i]);
        }
    }
    return count;
}

int main()
{
    std::string test = "n!!ic_e!!123";
    std::cout << countLettersAndDigits(test);
}
