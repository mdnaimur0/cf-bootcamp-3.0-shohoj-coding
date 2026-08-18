/*
 * Problem: A. Insomnia cure
 * URL: https://codeforces.com/problemset/problem/148/A
 * Date: 2026-08-19
 * Time: 00:33:52
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int k, l, m, n, d, count = 0;
  cin >> k >> l >> m >> n >> d;
  for (int i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
      count++;
  }
  cout << count;
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