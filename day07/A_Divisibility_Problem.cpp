/*
 * Problem: A. Divisibility Problem
 * URL: https://codeforces.com/problemset/problem/1328/A
 * Date: 2026-08-18
 * Time: 23:48:42
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll a, b, ans = 0;
  cin >> a >> b;
  if (a % b) {
    ans = (a / b + 1) * b - a;
  }
  cout << ans << endl;
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