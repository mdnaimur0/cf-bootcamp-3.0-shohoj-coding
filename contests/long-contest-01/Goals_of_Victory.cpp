/*
 * Problem: Goals of Victory
 * URL: https://vjudge.net/contest/841160#problem/I
 * Date: 2026-08-24
 * Time: 00:00:37
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, sum = 0, x;
  cin >> n;
  while (--n) {
    cin >> x;
    sum += x;
  }
  cout << -sum << endl;
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