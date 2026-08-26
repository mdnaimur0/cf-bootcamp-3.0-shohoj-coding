/*
 * Problem: How Much Does Daytona Cost?
 * URL: https://vjudge.net/contest/841160#problem/H
 * Date: 2026-08-23
 * Time: 18:31:47
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k, x;
  cin >> n >> k;
  bool ans = false;
  while (n--) {
    cin >> x;
    if (k == x)
      ans = true;
  }
  cout << (ans ? "YES" : "NO") << endl;
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