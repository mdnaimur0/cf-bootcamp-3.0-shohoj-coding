/*
 * Problem: A. Short Sort
 * URL: https://codeforces.com/problemset/problem/1873/A
 * Date: 2026-08-28
 * Time: 14:14:33
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  cout << (s[0] == 'a' || s[1] == 'b' || s[2] == 'c' ? "YES" : "NO") << endl;
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