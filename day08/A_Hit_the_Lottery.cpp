/*
 * Problem: A. Hit the Lottery
 * URL: https://codeforces.com/problemset/problem/996/A
 * Date: 2026-08-19
 * Time: 00:22:40
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n, ans = 0;
  cin >> n;
  ans += n / 100;
  n %= 100;
  ans += n / 20;
  n %= 20;
  ans += n / 10;
  n %= 10;
  ans += n / 5;
  n %= 5;
  ans += n;
  cout << ans;
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