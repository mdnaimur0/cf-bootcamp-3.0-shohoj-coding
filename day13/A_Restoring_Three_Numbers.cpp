/*
 * Problem: A. Restoring Three Numbers
 * URL: https://codeforces.com/problemset/problem/1154/A
 * Date: 2026-08-23
 * Time: 15:09:43
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll x1, x2, x3, x4;
  cin >> x1 >> x2 >> x3 >> x4;
  ll sum = max({x1, x2, x3, x4});
  if (sum == 0)
    cout << 0 << " " << 0 << " " << 0;

  if (sum - x1)
    cout << (sum - x1) << " ";
  if (sum - x2)
    cout << (sum - x2) << " ";
  if (sum - x3)
    cout << (sum - x3) << " ";
  if (sum - x4)
    cout << (sum - x4) << " ";
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