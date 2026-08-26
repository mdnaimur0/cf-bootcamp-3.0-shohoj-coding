/*
 * Problem: B. Borze
 * URL: https://codeforces.com/problemset/problem/32/B
 * Date: 2026-08-26
 * Time: 17:39:04
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  char prev = NULL;
  for (char c : s) {
    if (c == '.') {
      cout << (prev == '-' ? 1 : 0);
      prev = NULL;
    } else {
      if (prev == NULL)
        prev = c;
      else {
        cout << 2;
        prev = NULL;
      }
    }
  }
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