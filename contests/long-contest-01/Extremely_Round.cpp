/*
 * Problem: Extremely Round
 * URL: https://vjudge.net/contest/841160#problem/AD
 * Date: 2026-08-24
 * Time: 03:45:57
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, ans = 0, x;
  cin >> n;
  for (int i = 1; i <= 9; i++) {
    x = 1;
    while (i * x <= n) {
      ans++;
      x *= 10;
    }
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