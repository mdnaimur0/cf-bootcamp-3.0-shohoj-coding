/*
 * Problem: A. Buy a Shovel
 * URL: https://codeforces.com/problemset/problem/732/A
 * Date: 2026-08-22
 * Time: 20:11:39
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int k, r;
  cin >> k >> r;
  int n = 1;
  while ((n * k) % 10 && (n * k - r) % 10)
    n++;

  cout << n;
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