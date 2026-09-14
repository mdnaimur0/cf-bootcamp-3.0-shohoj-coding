/*
 * Problem: A. Kefa and First Steps
 * URL: https://codeforces.com/problemset/problem/580/A
 * Date: 2026-09-13
 * Time: 22:15:14
 */

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
  int n;
  cin >> n;
  int streak = 0, mx = 0, x = -1, y;
  for (int i = 0; i < n; i++) {
    cin >> y;
    if (y >= x) streak++;
    else {
      mx = max(streak, mx);
      streak = 1;
    }
    x = y;
  }
  mx = max(streak, mx);
  cout << mx;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}