/*
 * Problem: A. Football
 * URL: https://codeforces.com/problemset/problem/96/A
 * Date: 2026-09-07
 * Time: 18:30:11
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
  string s;
  cin >> s;
  cout << (s.find("1111111") != string::npos || s.find("0000000") != string::npos ? "YES" : "NO");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}