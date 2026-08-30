/*
 * Problem: A. Mishka and Game
 * URL: https://codeforces.com/problemset/problem/703/A
 * Date: 2026-08-31
 * Time: 02:04:45
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
  int n, x, y, track = 0;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    if (x - y) track += (x - y) / abs(x - y);
  }
  cout << (track > 0 ? "Mishka" : (track < 0 ? "Chris" : "Friendship is magic!^^"));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}