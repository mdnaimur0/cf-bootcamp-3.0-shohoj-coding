/*
 * Problem: Jagged Swaps
 * URL: https://vjudge.net/contest/841160#problem/E
 * Date: 2026-08-23
 * Time: 16:58:54
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, m;
  cin >> n;
  vi v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (i == 0)
      m = v[i];
    else
      m = min(v[i], m);
  }
  cout << (m == v[0] ? "YES" : "NO") << endl;
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