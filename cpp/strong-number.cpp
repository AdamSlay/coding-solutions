// Codewars Kata: Strong Number
// https://www.codewars.com/kata/5a4d303f880385399b000001/train/cpp

#include <iostream>
#include <string>
using namespace std;

string strong_num (int number)
{
    int sum = 0;
    int n = number;
    while (n > 0)
    {
        int fact = 1;
        int dig = n % 10;
        for (int i = 1; i <= dig; i++)
        {
            fact *= i; 
        }
        sum += fact;
        n = n / 10;
    }

    return (sum == number ? "STRONG!!!!": "Not Strong !!");
}

int main()
{
    int num = 185;
    cout << strong_num(num);
}
