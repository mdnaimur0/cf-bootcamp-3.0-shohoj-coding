/*
 * Problem: A. Ultra-Fast Mathematician
 * URL: https://codeforces.com/problemset/problem/61/A
 * Date: 2026-08-18
 * Time: 23:34:37
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s1, s2, ans = "";
  cin >> s1 >> s2;
  for (int i = 0; i < s1.length(); i++) {
    ans.push_back((s1[i] == s2[i]) ? '0' : '1');
  }
  cout << ans;
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