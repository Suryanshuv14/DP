#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  if (n1 > n2 && n1 > n3) {
    cout << n1 << " : Largest";

  } else if (n2 > n3) {
    cout << n2 << " : Largest";

  } else {
    cout << n3 << " : Largest";
  }

  return 0;
}