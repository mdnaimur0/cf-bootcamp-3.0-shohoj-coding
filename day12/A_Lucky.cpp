/*
 * Problem: A. Lucky?
 * URL: https://codeforces.com/problemset/problem/1676/A
 * Date: 2026-08-22
 * Time: 20:28:54
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  if ((s[0] + s[1] + s[2]) == (s[3] + s[4] + s[5]))
    cout << "YES\n";
  else
    cout << "NO\n";
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