/*
 * Problem: A. Word Capitalization
 * URL: https://codeforces.com/problemset/problem/281/A
 * Date: 2026-08-12
 * Time: 16:03:42
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  if (s.front() >= 97)
    s[0] = s.front() - 32;
  cout << s;
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