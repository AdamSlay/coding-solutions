// Codewars Kata: Extra Perfect Numbers
// https://www.codewars.com/kata/5a662a02e626c54e87000123

#include <iostream>
#include <vector>
using namespace std;

vector<int> extraPerfect (int number)
{
    vector<int> vals;
    for (int i = 1; i <= number; i+=2)
    {
        vals.push_back(i);
    }
    return vals;
}

int main()
{
    int n = 21;
    for (int i: extraPerfect(n))
        cout << i << " ";
}
