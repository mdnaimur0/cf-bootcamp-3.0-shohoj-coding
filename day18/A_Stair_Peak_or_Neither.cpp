/*
 * Problem: A. Stair, Peak, or Neither?
 * URL: https://codeforces.com/problemset/problem/1950/A
 * Date: 2026-08-29
 * Time: 12:36:56
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
  cout << (a < b && b < c ? "STAIR" : (a < b && b > c ? "PEAK" : "NONE")) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}