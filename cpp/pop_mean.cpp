// μ = ( Σ Xi ) / N
// μ = population mean | ( Σ Xi ) = sumation of all scores | N = number of scores
#include <iostream>
#include <vector>
using namespace std;

double pop_mean(vector<double> scores) {
   double sum = 0.0;
   for (int i = 0; i < scores.size(); i++) {
       sum += scores[i];
   }
   double mean = sum / scores.size();
   return mean;
}

int main() {
    vector<double> pop_scores = {84, 83, 100, 79, 96, 93, 58};
    cout<<pop_mean(pop_scores);
}
