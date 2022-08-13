#include <utility>
#include <vector>
#include <iostream>
using namespace std;


// This is an implimentatino of Simple Linear Regression
// This solution assumes that each vector contains the same number of values
pair<double, double> coefficient(vector<double> x, vector<double> y) {
   double b0;
   double b1;
   double size = x.size();
   
   // Find Mean of x and y
   int sum_x = 0;
   int sum_y = 0;
   for (int i = 0; i < size; i++) {
      sum_x += x[i];
      sum_y += y[i];
   }
   double mean_x = sum_x / size; 
   double mean_y = sum_y / size;

   // Find sum of x and y vectors   
   int vect_sumx = 0;
   int vect_sumy = 0;
   for (int i = 0; i < size; i++) {
      vect_sumy += (x[i] * y[i]);
      vect_sumx += (x[i] * x[i]);
   }
   
   
   double ssy = vect_sumy - (size*mean_y*mean_x);
   double ssx = vect_sumx - (size*mean_x*mean_x);

   b1 = ssy / ssx;
   b0 = mean_y - (mean_x*b1);

   return make_pair(b0, b1);
}

vector<double> y_predict(vector<double> x, pair<double, double> b) {
  vector<double> y_pred;
  for (int i = 0; i < x.size(); i++) {
     y_pred.push_back(b.first + (b.second * x[i]));
  }
  return y_pred;
}

int main() {
   vector<double> x = {0,1,2,3,4,5,6,7,8,9};
   vector<double> y = {1,3,2,5,7,8,8,9,10,12};
   vector<double> y_prediction_for_each_x = y_predict(x, coefficient(x, y));
   
   for (double i: y_prediction_for_each_x)
      cout << i << ' ';
}
