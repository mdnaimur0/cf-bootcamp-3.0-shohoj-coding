/*
 * Problem: A. Magnets
 * URL: https://codeforces.com/problemset/problem/344/A
 * Date: 2026-08-15
 * Time: 12:42:46
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, ans = 1;
  cin >> n;
  string temp, prev;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (i == 0) {
      prev = temp;
      continue;
    }
    if (prev.back() == temp.front())
      ans++;
    prev = temp;
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