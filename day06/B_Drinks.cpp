/*
 * Problem: B. Drinks
 * URL: https://codeforces.com/problemset/problem/200/B
 * Date: 2026-08-15
 * Time: 12:59:48
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, p;
  cin >> n;
  vi v(n);
  double sum = 0, ans;
  for (int i = 0; i < n; i++) {
    cin >> p;
    sum += (double)p / 100;
  }
  ans = sum / n * 100;
  cout << fixed << setprecision(12) << ans;
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