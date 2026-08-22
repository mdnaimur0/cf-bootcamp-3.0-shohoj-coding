/*
 * Problem: A. YES or YES?
 * URL: https://codeforces.com/problemset/problem/1703/A
 * Date: 2026-08-22
 * Time: 18:46:41
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  cin >> s;
  for (int i = 0; i < 3; i++)
    s[i] = tolower(s[i]);
  cout << (s.compare("yes") ? "NO" : "YES") << endl;
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