/*
 * Problem: A. Array Coloring
 * URL: https://codeforces.com/problemset/problem/1857/A
 * Date: 2026-08-26
 * Time: 17:34:56
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, sum = 0, x;
  cin >> n;
  while (n--) {
    cin >> x;
    sum += x;
  }
  cout << (sum % 2 ? "NO" : "YES") << endl;
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