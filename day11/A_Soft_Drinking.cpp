/*
 * Problem: A. Soft Drinking
 * URL: https://codeforces.com/problemset/problem/151/A
 * Date: 2026-08-22
 * Time: 18:55:20
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int td = k * l;
  int ts = c * d;
  int ans = min({td / nl, ts, p / np});
  cout << ans / n;
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