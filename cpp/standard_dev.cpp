#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 

// Implementation of Standard Deviation in C++
// σ = sqrt[ Σ ( Xi – μ )^2 / N ]
double sd(vector<double> vect, int size) {
    
    // sum of vect, then mean
    double vect_sum = 0;
    for (int i = 0; i < size; i++) {
        vect_sum += vect[i];
    }
    double mean = vect_sum / size;
    
    // difference between each value and the mean, squared
    vector<double> diff;
    for (int i = 0; i < size; i++) {
        diff.push_back(pow((vect[i] - mean), 2));
    }

    // square root (sum of diff / number of values)
    double diff_sum = 0;
    for (int i = 0; i < size; i++) {
        diff_sum += diff[i];
    }
    double stan_d = pow((diff_sum/size), 0.5);

    return stan_d;
}

int main() {
    vector<double> values = {180, 172, 178, 185, 190, 195, 192, 200, 210, 190};
    int size = values.size();
    cout<<sd(values, size);
}
