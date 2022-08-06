#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minimumSteps (vector<int> numbers, int goal) {
    int count = -1;
    int sum = 0;
    sort(numbers.begin(), numbers.end());
   
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        count += 1;
        if (sum >= goal) {
            break;
        }
    }
    return count;
}

int main() {
    vector<int> vect = {19,98,69,28,75,45,17,98,67};
    int goal = 464;
    cout<<minimumSteps(vect, goal);
}
