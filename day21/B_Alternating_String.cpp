/*
 * Problem: B. Alternating String
 * URL: https://codeforces.com/problemset/problem/2225/B
 * Date: 2026-09-07
 * Time: 12:05:12
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
  int ans = 0;
  for (int i = 0; i < (int)s.size() - 1; i++) {
    ans += (s[i] == s[i + 1]);
  }
  cout << (ans <= 2 ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}