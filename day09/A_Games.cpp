/*
 * Problem: A. Games
 * URL: https://codeforces.com/problemset/problem/268/A
 * Date: 2026-08-20
 * Time: 13:52:11
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;

  vi v1(n), v2(n);
  int i, j, ans = 0;
  for (i = 0; i < n; i++)
    cin >> v1[i] >> v2[i];

  for (i = 0; i < n * n; i++) {
    if (v1[i / n] == v2[i % n])
      ans++;
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