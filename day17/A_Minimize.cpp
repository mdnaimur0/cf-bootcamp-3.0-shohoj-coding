/*
 * Problem: A. Minimize!
 * URL: https://codeforces.com/problemset/problem/2009/A
 * Date: 2026-08-28
 * Time: 14:03:46
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b;
  cin >> a >> b;
  int c = (a + b) / 2;
  cout << (c - a) + (b - c) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}