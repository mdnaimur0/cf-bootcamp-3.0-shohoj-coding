/*
 * Problem: B. Balanced Array
 * URL: https://codeforces.com/problemset/problem/1343/B
 * Date: 2026-08-31
 * Time: 16:08:38
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
  if (n % 4) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES\n";
  n /= 2;
  vi even, odd;
  for (int i = 1; i <= n; i++) even.push_back(2 * i);
  for (int i = 1; i <= n; i++) odd.push_back(2 * i - 1);
  odd.back() += n;
  for (int a : even) cout << a << " ";
  for (int a : odd) cout << a << " ";
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