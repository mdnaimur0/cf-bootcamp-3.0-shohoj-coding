/*
 * Problem: A. Ilya and Bank Account
 * URL: https://codeforces.com/problemset/problem/313/A
 * Date: 2026-09-16
 * Time: 00:37:43
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
  if (n >= 0) cout << n;
  else {
    int a = n / 10;
    int b = (n / 100) * 10 + (n % 10);
    cout << max(a, b);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}