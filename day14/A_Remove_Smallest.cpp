/*
 * Problem: A. Remove Smallest
 * URL: https://codeforces.com/problemset/problem/1399/A
 * Date: 2026-08-24
 * Time: 15:51:16
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  vi v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  int count = 0;
  for (int i = n - 2; i >= 0; i--) {
    if (abs(v[i] - v[i + 1]) <= 1) {
      v[i + 1] = INT32_MIN;
      count++;
    }
  }
  cout << (n - count == 1 ? "YES" : "NO") << endl;
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