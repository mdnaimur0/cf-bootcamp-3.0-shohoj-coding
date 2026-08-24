/*
 * Problem: A. Yet Another Two Integers Problem
 * URL: https://codeforces.com/problemset/problem/1409/A
 * Date: 2026-08-24
 * Time: 16:00:42
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll a, b;
  cin >> a >> b;
  // int steps = 0, factor = a > b ? -1 : 1;
  // for (int i = 10; i > 0; i--) {
  //   if (abs(a - b) >= i) {
  //     steps += abs(a - b) / i;
  //     a += (abs(a - b) / i) * i * factor;
  //   }
  // }
  // cout << steps << endl;
  cout << (abs(a - b) + 9) / 10 << endl; // +9 to get the ceiling value
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