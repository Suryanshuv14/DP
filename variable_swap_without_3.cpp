#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a = 10;
  int b = 5;
  int temp;
  
  temp = b;
  b = a;
  a = temp;

  cout << a << " " << b;

  return 0;
}
