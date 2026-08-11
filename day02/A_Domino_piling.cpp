/*
 * Problem: A. Domino piling
 * URL: https://codeforces.com/problemset/problem/50/A
 * Date: 2026-08-11
 * Time: 12:26:21
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int m, n, count = 0;
  cin >> m >> n;

  if (m > n && m >= 2) {
    count += (m / 2) * n;
    int rem = m % 2;
    if (rem == 1 && n >= 2) {
      count += n / 2;
    }
  } else if (m <= n && n >= 2) {
    count += (n / 2) * m;
    int rem = n % 2;
    if (rem == 1 && m >= 2) {
      count += m / 2;
    }
  }

  cout << count;
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