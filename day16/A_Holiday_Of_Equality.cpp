/*
 * Problem: A. Holiday Of Equality
 * URL: https://codeforces.com/problemset/problem/758/A
 * Date: 2026-08-27
 * Time: 13:12:59
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, mx = INT32_MIN;
  cin >> n;
  vi v(n);
  for (int &el : v) {
    cin >> el;
    mx = max(mx, el);
  }
  int sum = 0;
  for (int el : v)
    sum += mx - el;
  cout << sum;
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