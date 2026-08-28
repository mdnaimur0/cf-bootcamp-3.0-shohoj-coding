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

vi v = {1, 2, 4, 5, 7, 8, 10, 11, 14, 16, 17, 19, 20, 22, 25, 26, 28, 29};

void solve() {
  int k;
  cin >> k;
  cout << v[(k - 1) % 18] + (k - 1) / 18 * 30 << endl;
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