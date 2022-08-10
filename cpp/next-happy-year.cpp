// Codewars Kata: See You Next Happy Year
// https://www.codewars.com/kata/5ae7e3f068e6445bc8000046/cpp

#include <iostream>
#include <string>
unsigned short int nextHappyYear (unsigned short int year) 
{
    unsigned short int hap = year + 1;
    bool searching = true;
    while (searching)
    {
        int count = 0;
        std::string ch = std::to_string(hap);
        for (int i = 0; i < ch.length(); i++)
        {
            for (int j = i + 1; j < ch.length(); j++)
            {
                if (ch[j] == ch[i])
                {
                    count += 1;
                }
            }
        }
        if (count == 0) 
        {
            searching = false;
            return hap;
        }
        hap += 1;
    }
    return 1;
}

int main() 
{
    unsigned short int yr = 2001;
    std::cout << nextHappyYear(yr);
}
