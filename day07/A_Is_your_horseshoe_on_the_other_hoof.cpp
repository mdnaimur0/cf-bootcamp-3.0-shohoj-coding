/*
 * Problem: A. Is your horseshoe on the other hoof?
 * URL: https://codeforces.com/problemset/problem/228/A
 * Date: 2026-08-18
 * Time: 23:28:49
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  set<ll> s = {s1, s2, s3, s4};
  cout << 4 - s.size();
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