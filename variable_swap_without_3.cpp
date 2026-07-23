#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a = 10;
  int b = 5;

  a = a + b;
  b = a - b;
  a = a - b;
  cout << a << " " << b;

  return 0;
}
