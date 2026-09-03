/*
 * Problem: A. Cover in Water
 * URL: https://codeforces.com/problemset/problem/1900/A
 * Date: 2026-08-31
 * Time: 15:54:32
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
  string s;
  cin >> n >> s;
  int streak = 0, ans = 0;
  for (char c : s) {
    if (c == '.') streak++;
    else {
      if (streak >= 3) break;
      ans += streak;
      streak = 0;
    };
  }
  ans += streak;
  cout << (streak < 3 ? ans : 2) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}