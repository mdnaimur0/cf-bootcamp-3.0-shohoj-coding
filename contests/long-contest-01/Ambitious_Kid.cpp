/*
 * Problem: Ambitious Kid
 * URL: https://vjudge.net/contest/841160#problem/K
 * Date: 2026-08-24
 * Time: 00:44:54
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x, mn;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (i == 0)
      mn = abs(x);
    else
      mn = min(mn, abs(x));
  }
  cout << mn;
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