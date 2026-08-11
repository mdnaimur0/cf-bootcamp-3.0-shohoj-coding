/*
 * Problem: A. Helpful Maths
 * URL: https://codeforces.com/problemset/problem/339/A
 * Date: 2026-08-11
 * Time: 13:52:45
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  vi v;
  int i;
  for (i = 0; i < s.length(); i += 2) {
    v.push_back(s[i]);
  }
  sort(v.begin(), v.end());
  s.clear();
  for (i = 0; i < v.size(); i++) {
    if (i != 0)
      s.push_back('+');

    s.push_back(v[i]);
  }
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