/*
 * Problem: A. Hulk
 * URL: https://codeforces.com/problemset/problem/705/A
 * Date: 2026-08-18
 * Time: 23:42:58
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i > 1)
      cout << " that ";
    cout << (i % 2 ? "I hate" : "I love");
  }
  cout << " it";
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