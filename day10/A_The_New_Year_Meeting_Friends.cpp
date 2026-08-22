/*
 * Problem: A. The New Year: Meeting Friends
 * URL: https://codeforces.com/problemset/problem/723/A
 * Date: 2026-08-20
 * Time: 15:27:49
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  vi v = {x1, x2, x3};
  sort(v.begin(), v.end());
  cout << (abs(v[1] - x1) + abs(v[1] - x2) + abs(v[1] - x3));
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