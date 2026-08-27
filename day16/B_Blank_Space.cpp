/*
 * Problem: B. Blank Space
 * URL: https://codeforces.com/problemset/problem/1829/B
 * Date: 2026-08-27
 * Time: 12:57:13
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x, ans = 0, streak = 0;
  cin >> n;
  while (n--) {
    cin >> x;
    if (x == 0)
      streak++;
    else {
      ans = max(ans, streak);
      streak = 0;
    }
  }
  cout << max(ans, streak) << endl;
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