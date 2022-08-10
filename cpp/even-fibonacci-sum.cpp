// Porject Euler Problem: Even Fibonacci Numbers
// https://projecteuler.net/problem=2
#include <vector>
#include <iostream>
#include <type_traits>
using namespace std;

int evens() {
    int term_limit = 4000000;
    int sum = 0;
    vector<int> fib = {0,1};
    while (fib.end()[-1] < term_limit)
    {
        int next = fib.end()[-1] + fib.end()[-2];
        fib = {fib.end()[-1], next};
        if (next % 2 == 0)
        {
            sum += next;
        }
    }
    return sum;
}

int main() 
{
    cout << evens();
}
