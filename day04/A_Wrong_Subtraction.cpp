/*
 * Problem: A. Wrong Subtraction
 * URL: https://codeforces.com/problemset/problem/977/A
 * Date: 2026-08-13
 * Time: 10:06:57
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n, k;
  cin >> n >> k;
  while (k--) {
    if (n % 10 == 0)
      n /= 10;
    else
      n -= 1;
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