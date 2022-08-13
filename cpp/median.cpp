#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double median(vector<double> vect) {
   double median;
   int size = vect.size();
   sort(vect.begin(), vect.end());
   
   if (size % 2 == 0) {
      double median = (vect[size / 2] + vect[(size / 2) + 1]) / 2;
      return median;
   }
   else {
      double median = vect[(size / 2) + 1];
      return median;
   }
}

int main() {
   vector<double> v = {19,27,34,12,43,21,30,17,39};
   
   cout<<median(v)<<endl;
}
