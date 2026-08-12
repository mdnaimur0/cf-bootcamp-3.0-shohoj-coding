/*
 * Problem: A. Stones on the Table
 * URL: https://codeforces.com/problemset/problem/266/A
 * Date: 2026-08-12
 * Time: 17:56:20
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, c = 0;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1])
      c++;
  }
  cout << c;
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