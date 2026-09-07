/*
 * Problem: C1. We Be Flipping (Easy Version)
 * URL: https://codeforces.com/problemset/problem/2229/C1
 * Date: 2026-09-05
 * Time: 13:13:07
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

  vll v(n);
  for (ll& x : v) cin >> x;

  vll ans;
  bool swap = false;
  for (int i = n - 1; i >= 0; i--) {
    if (swap) v[i] *= -1;
    if (v[i] > 0) {
      ans.push_back(i + 1);
      swap = !swap;
    }
  }
  cout << ans.size() << endl;
  for (ll x : ans) cout << x << " ";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}