// Codewars Kata: GCD sum
// https://www.codewars.com/kata/5dd259444228280032b1ed2a/train/cpp

#include <iostream>
using namespace std;

pair<int, int> solve(int s, int g)
{
    if (s % g > 0)
    {
        return make_pair(-1, -1);
    }
    return make_pair(g, (s - g));     
}

int main()
{
    int s = 8;
    int g = 2;
    pair<int, int> result = solve(s, g);
    cout << result.first << ", " << result.second;
    
}
