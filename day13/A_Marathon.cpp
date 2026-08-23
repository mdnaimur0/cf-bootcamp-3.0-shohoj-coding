/*
 * Problem: A. Marathon
 * URL: https://codeforces.com/problemset/problem/1692/A
 * Date: 2026-08-23
 * Time: 15:17:52
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b, c, d, ans = 0;
  cin >> a >> b >> c >> d;
  ans += b > a;
  ans += c > a;
  ans += d > a;
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