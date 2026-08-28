/*
 * Problem: A. Dislike of Threes
 * URL: https://codeforces.com/problemset/problem/1560/A
 * Date: 2026-08-28
 * Time: 13:15:35
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int k;
  cin >> k;
  int curr = 1;
  for (int i = 0; i < k; i++) {
    while (curr % 3 == 0 || curr % 10 == 3)
      curr++;
    curr++;
  }
  cout << curr - 1 << endl;
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