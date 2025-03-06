#include <iostream>

using namespace std;

int nextPrime(int start) {
  while (true) {
    bool prime = true;
    if (start % 2 == 0) {
      start++;
      continue;
    } else if (start % 3 == 0) {
      start++;
      continue;
    }
    int num = 5;
    while (num * num <= start) {
      if (start % num == 0 || start % (num + 2) == 0) {
        prime = false;
        break;
      }
      num += 6;
    }
    if (prime == true) {
      return start;
    }
  }
}

double power(double num, int power) {
  for (int i = 1; i < power; i++) {
    num *= num;
  }
  return num;
}

int main() {
  cout << "Github Test" << endl;
  cout << power(10, 2) << endl;
  cout << nextPrime(15) << endl;
}
