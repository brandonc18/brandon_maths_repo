#include <iostream>

using namespace std;

void power(double num, int power) {
  for (int i = 1; i < power; i++) {
    num *= num;
  }
  cout << num << endl;
}

int main() {
  cout << "Github Test" << endl;
  power(10.0, 2);
}
