/*
 * Problem: A. New Year and Hurry
 * URL: https://codeforces.com/problemset/problem/750/A
 * Date: 2026-08-22
 * Time: 19:46:28
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k;
  cin >> n >> k;
  int t = 4 * 60 - k;
  if (t < 0)
    n = 0;
  while (n) {
    if ((5 * n * (n + 1) / 2) <= t)
      break;
    n--;
  }
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