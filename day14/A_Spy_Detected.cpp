/*
 * Problem: A. Spy Detected!
 * URL: https://codeforces.com/problemset/problem/1512/A
 * Date: 2026-08-24
 * Time: 16:19:25
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x = 0;
  cin >> n;
  vi v(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    mp[v[i]]++;
  }
  for (auto &el : mp) {
    if (el.second == 1) {
      for (int i = 0; i < n; i++) {
        if (v[i] == el.first) {
          cout << i + 1 << endl;
          return;
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}