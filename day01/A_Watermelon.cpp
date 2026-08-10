/*
 * Problem: A. Watermelon
 * URL: https://codeforces.com/problemset/problem/4/A
 * Date: 2026-08-10
 * Time: 12:08:23
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;

  if (n % 2 == 0 && n > 2) {
    cout << "YES";
  } else {
    cout << "NO";
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