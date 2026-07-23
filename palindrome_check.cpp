#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int len = s.length() - 1;

  for (int i = 0; i < (s.length()) / 2; i++) {
    if (s[i] != s[len]) {
      cout << "Not Palindrome";
      return 0;
    }

    len--;
  }

  cout << "Palindrome";

  return 0;
}