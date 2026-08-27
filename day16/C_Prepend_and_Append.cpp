/*
 * Problem: C. Prepend and Append
 * URL: https://codeforces.com/problemset/problem/1791/C
 * Date: 2026-08-27
 * Time: 13:23:47
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int f = 0, r = n - 1;
  while (s[f] != s[r] && f <= r) {
    f++;
    r--;
  }
  cout << (r - f + 1) << endl;
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