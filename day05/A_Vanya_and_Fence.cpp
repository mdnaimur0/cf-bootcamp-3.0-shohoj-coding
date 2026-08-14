/*
 * Problem: A. Vanya and Fence
 * URL: https://codeforces.com/problemset/problem/677/A
 * Date: 2026-08-14
 * Time: 19:26:12
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, h, count = 0, temp;
  cin >> n >> h;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp > h)
      count += 2;
    else
      count++;
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