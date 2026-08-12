/*
 * Problem: A. Soldier and Bananas
 * URL: https://codeforces.com/problemset/problem/546/A
 * Date: 2026-08-12
 * Time: 18:03:12
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int k, n, w;
  cin >> k >> n >> w;

  int total = k * w * (w + 1) / 2;
  cout << max(total - n, 0);
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