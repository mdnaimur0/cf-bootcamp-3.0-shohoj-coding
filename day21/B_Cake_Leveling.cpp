/*
 * Problem: B. Cake Leveling
 * URL: https://codeforces.com/problemset/problem/2232/B
 * Date: 2026-09-04
 * Time: 23:08:38
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
  for (ll& el : v) cin >> el;
  ll sum = 0, h = LONG_LONG_MAX;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    h = min(h, sum / (i + 1));
    cout << h << " ";
  }
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