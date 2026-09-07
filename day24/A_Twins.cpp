/*
 * Problem: A. Twins
 * URL: https://codeforces.com/problemset/problem/160/A
 * Date: 2026-09-07
 * Time: 18:35:35
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

  vi v(n);
  int sum = 0;
  for (int& x : v) {
    cin >> x;
    sum += x;
  }
  sort(rall(v));
  int i, curr = 0;
  for (i = 0; i < n; i++) {
    curr += v[i];
    if (curr > sum / 2) break;
  }
  cout << i + 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}