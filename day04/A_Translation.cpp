/*
 * Problem: A. Translation
 * URL: https://codeforces.com/problemset/problem/41/A
 * Date: 2026-08-13
 * Time: 10:24:17
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  reverse(s2.begin(), s2.end());
  if (s1.compare(s2) == 0)
    cout << "YES";
  else
    cout << "NO";
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