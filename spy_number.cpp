#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int inpNum, multiplier = 1, sum = 0;
  cin >> inpNum;
  int adder = inpNum;
  int mul = inpNum;

  while (adder > 0) {
    int remainder = adder % 10;
    sum = sum + remainder;
    adder /= 10;
  }

  while (mul > 0) {
    int remainder = mul % 10;
    multiplier = multiplier * remainder;
    mul /= 10;
  }

  if (sum == multiplier) {
    cout << "Spy Number";
  } else {
    cout << "Not Spy Number";
  }

  return 0;
}