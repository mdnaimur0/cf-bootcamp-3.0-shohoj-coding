/*
 * Problem: A. Presents
 * URL: https://codeforces.com/problemset/problem/136/A
 * Date: 2026-08-15
 * Time: 13:13:01
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x;
  cin >> n;
  vi v(n);
  for (int i = 0; i < n; i++) {
    cin >> x;
    v[x - 1] = i;
  }
  for (int i = 0; i < n; i++) {
    cout << v[i] + 1 << " ";
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