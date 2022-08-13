// Codewars Kata: Automorphic Number
// https://www.codewars.com/kata/5a58d889880385c2f40000aa

#include <iostream>
#include <string>
using namespace std;

string autoMorphic (int number)
{
    string square = to_string(number * number);
    string num = to_string(number);

    int num_size = num.size();
    int sq_size = square.size();
    int last_four = abs(num_size - sq_size);

    if (square.substr(last_four) == num)
    {
        return "Automorphic";
    }
    return "Not!!";
}

int main()
{
    int n = 225;
    cout << autoMorphic(n);
}
