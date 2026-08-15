/*
 * Problem: A. Calculating Function
 * URL: https://codeforces.com/problemset/problem/486/A
 * Date: 2026-08-15
 * Time: 12:29:08
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n;
  cin >> n;
  ll sum = n / 2;
  if (n % 2)
    sum -= n;
  cout << sum;
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