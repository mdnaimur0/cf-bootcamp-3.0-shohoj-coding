/*
 * Problem: A. Word
 * URL: https://codeforces.com/problemset/problem/59/A
 * Date: 2026-08-13
 * Time: 09:59:27
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  int a = 0, b = 0;
  for (char ch : s) {
    if (isupper(ch))
      a++;
    else
      b++;
  }
  for (int i = 0; i < s.length(); i++) {
    s[i] = a > b ? toupper(s[i]) : tolower(s[i]);
  }
  cout << s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}