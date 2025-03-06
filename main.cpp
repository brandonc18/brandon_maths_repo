#include <iostream>

using namespace std;

void power(double num, int power) {
  for (int i = 1; i < power; i++) {
    num *= num;
  }
  return num;
}

int main() {
  cout << "Github Test" << endl;
  cout << power(10, 2) << endl;
}
