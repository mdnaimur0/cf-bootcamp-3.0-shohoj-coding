/*
 * Problem: A. Love Story
 * URL: https://codeforces.com/problemset/problem/1829/A
 * Date: 2026-08-29
 * Time: 10:09:18
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s1, s2 = "codeforces";
  cin >> s1;
  int ans = 0;
  for (int i = 0; i < 10; i++)
    ans += s1[i] != s2[i];
  cout << ans << endl;
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