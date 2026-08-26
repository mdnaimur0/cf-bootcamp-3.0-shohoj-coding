/*
 * Problem: A. How Much Does Daytona Cost?
 * URL: https://codeforces.com/problemset/problem/1878/A
 * Date: 2026-08-26
 * Time: 16:49:58
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