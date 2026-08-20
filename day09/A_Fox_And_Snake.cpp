/*
 * Problem: A. Fox And Snake
 * URL: https://codeforces.com/problemset/problem/510/A
 * Date: 2026-08-20
 * Time: 13:22:51
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, m;
  cin >> n >> m;
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (i % 2 == 0 || (i % 4 == 1 && j == m - 1) || (i % 4 == 3 && j == 0))
        cout << "#";
      else
        cout << ".";
    }
    cout << endl;
  }
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