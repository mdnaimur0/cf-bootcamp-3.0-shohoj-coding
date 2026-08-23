/*
 * Problem: A. A+B Again?
 * URL: https://codeforces.com/problemset/problem/1999/A
 * Date: 2026-08-23
 * Time: 15:29:16
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  cout << (n % 10 + (n / 10) % 10) << endl;
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