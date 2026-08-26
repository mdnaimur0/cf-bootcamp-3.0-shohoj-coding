/*
 * Problem: A. Odd One Out
 * URL: https://codeforces.com/problemset/problem/1915/A
 * Date: 2026-08-26
 * Time: 16:37:41
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << (a ^ b ^ c) << endl;
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