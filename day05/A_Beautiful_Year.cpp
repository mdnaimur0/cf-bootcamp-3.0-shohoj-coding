/*
 * Problem: A. Beautiful Year
 * URL: https://codeforces.com/problemset/problem/271/A
 * Date: 2026-08-14
 * Time: 19:32:59
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

bool distinct(int y) {
  set<int> s;
  while (y > 0) {
    s.insert(y % 10);
    y /= 10;
  }
  return s.size() == 4;
}

void solve() {
  int y;
  cin >> y;
  y++;
  while (!distinct(y))
    y++;
  cout << y;
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