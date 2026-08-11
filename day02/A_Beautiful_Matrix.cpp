/*
 * Problem: A. Beautiful Matrix
 * URL: https://codeforces.com/problemset/problem/263/A
 * Date: 2026-08-11
 * Time: 12:48:16
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  vector<vi> mat(5, vi(5, 0));

  int i, j, steps = 0;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cin >> mat[i][j];
      if (mat[i][j] == 1) {
        steps = abs(2 - i) + abs(2 - j);
      }
    }
  }
  cout << steps;
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