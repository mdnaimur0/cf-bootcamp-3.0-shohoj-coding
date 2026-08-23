/*
 * Problem: A. Vasya the Hipster
 * URL: https://codeforces.com/problemset/problem/581/A
 * Date: 2026-08-23
 * Time: 15:23:15
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b;
  cin >> a >> b;
  int m = min(a, b);
  int n = (a - m) + (b - m);
  cout << m << " " << n / 2;
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