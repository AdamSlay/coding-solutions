// For some reason this Codewars Problem thinks that 'men' are even numbers and 'boys' are odd numbers.
// Take a given vector<int> and separate the evens from the odds
// return a new vector with evens ascending then odds descending.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> menFromBoys (vector<int> values) {
    vector<int> e;
    vector<int> o;
    for (int i = 0; i < values.size(); i++) {
        if (values[i] % 2 == 0) {
            e.push_back(values[i]);
        }
        else {
            o.push_back(values[i]);
        }
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    e.insert(e.end(), o.rbegin(), o.rend());
    return e;

}

int main() {
    vector<int> val = {7,3,14,17};
    for (int i: menFromBoys(val))
        cout << i << ' ';
}
