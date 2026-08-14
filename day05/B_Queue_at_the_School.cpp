/*
 * Problem: B. Queue at the School
 * URL: https://codeforces.com/problemset/problem/266/B
 * Date: 2026-08-14
 * Time: 20:07:51
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  while (t--) {
    for (int i = 1; i < s.length(); i++) {
      if (s[i] == 'G' && s[i - 1] == 'B') {
        swap(s[i], s[i - 1]);
        i++;
      }
    }
  }
  cout << s;
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