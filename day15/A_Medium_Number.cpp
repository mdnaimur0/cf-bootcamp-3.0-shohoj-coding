/*
 * Problem: A. Medium Number
 * URL: https://codeforces.com/problemset/problem/1760/A
 * Date: 2026-08-26
 * Time: 15:14:34
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans, mn = min({a, b, c}), mx = max({a, b, c});
  if (a > mn && a < mx)
    ans = a;
  else if (b > mn && b < mx)
    ans = b;
  else
    ans = c;
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