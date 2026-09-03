/*
 * Problem: B. ICPC Balloons
 * URL: https://codeforces.com/problemset/problem/1703/B
 * Date: 2026-08-31
 * Time: 15:30:02
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
  int ans = 0, x;
  map<int, int> mp;
  for (char c : s) {
    x = mp[c - 'A']++;
    ans += 1 + (x == 0);
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}