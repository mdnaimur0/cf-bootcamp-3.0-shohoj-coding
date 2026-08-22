/*
 * Problem: A. I_love_%username%
 * URL: https://codeforces.com/problemset/problem/155/A
 * Date: 2026-08-22
 * Time: 19:31:16
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  int least, best, x, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (i == 0) {
      least = best = x;
    } else {
      if (x < least || x > best) {
        ans++;
        least = min(least, x);
        best = max(best, x);
      }
    }
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