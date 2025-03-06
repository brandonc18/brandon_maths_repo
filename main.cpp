#include <iostream>

using namespace std;

double power(double num, int power) {
  for (int i = 1; i < power; i++) {
    num *= num;
  }
  return num;
}

double sqrt(double num){
    double x = num;
    double y = 1;
    
    while (x - y > 0) {
        x = (x + y)/2;
        y = num/x;
    }
    
    return x;
}

int main() {
  cout << "Github Test" << endl;
  cout << power(10, 2) << endl;
  cout << sqrt(100) << endl;
}
