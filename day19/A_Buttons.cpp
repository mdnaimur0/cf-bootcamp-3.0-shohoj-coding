/*
 * Problem: A. Buttons
 * URL: https://codeforces.com/problemset/problem/1858/A
 * Date: 2026-08-31
 * Time: 02:00:03
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
  int a, b, c;
  cin >> a >> b >> c;
  cout << ((a + c % 2) > b ? "First" : "Second") << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}