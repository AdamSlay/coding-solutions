// Codewars Kata: Jumping Number
// https://www.codewars.com/kata/5a54e796b3bfa8932c0000ed

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string jumpingNumber(int number)
{
    vector<int> digs;
    int num = number;
    while (num != 0)
    {
        digs.push_back(num % 10);
        num /= 10;
    }

    for (unsigned int i = 1; i < digs.size(); i++)
    {
        if ((digs[i-1] == digs[i] - 1) || (digs[i-1] == digs[i] + 1))
        {
            continue;
        }
        return "Not!!";
    }
    
    return "Jumping!!";
}

int main()
{
    int n = 987898764;
    cout << jumpingNumber(n); 
}
