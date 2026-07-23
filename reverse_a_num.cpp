#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  while (n > 0) {
    int last = n % 10;
    n = n / 10;
    cout << last;
  }

  return 0;
}