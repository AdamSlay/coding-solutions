// Codewars Kata: Poet and the Pendulum
// https://www.codewars.com/kata/5bd776533a7e2720c40000e5/cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Pendulum(vector<int> values)
{
    sort(begin(values), end(values));
    vector<int> fin = {values[0]};
    for (int i = 1; i < values.size(); i++)
    {
        if (i % 2 == 1)
        {
            fin.push_back(values[i]);
        }
        else
        {
            fin.push_back(0);
            fin.pop_back();
            fin.insert(fin.begin(), values[i]);
        }
    }
    return fin;
}

int main() 
{
    vector<int> vect = {27,28,26,28,24,22,18,16,15,24};
    for (int i: Pendulum(vect))
        cout << i << " ";
}
