#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int inpNum, power = 0, sum = 0;
  cin >> inpNum;
  int pwnum = inpNum;
  int sumnum = inpNum;

  while (pwnum > 0) {
    power++;
    pwnum /= 10;
  }

  while (sumnum > 0) {
    int remainder = sumnum % 10;
    int rempw = pow(remainder, power);
    sumnum /= 10;
    sum += rempw;
  }

  if (sum == inpNum) {
    cout << "Armstrong";
  } else {
    cout << "NOT Armstrong";
  }

  return 0;
}