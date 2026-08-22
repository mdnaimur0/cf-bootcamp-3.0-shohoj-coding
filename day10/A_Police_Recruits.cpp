/*
 * Problem: A. Police Recruits
 * URL: https://codeforces.com/problemset/problem/427/A
 * Date: 2026-08-22
 * Time: 18:37:54
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n, crimes = 0, free = 0, x;
  cin >> n;
  while (n--) {
    cin >> x;
    if (x == -1) {
      if (free)
        free--;
      else
        crimes++;
    } else
      free += x;
  }
  cout << crimes;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}