/*
 * Problem: A. Anton and Danik
 * URL: https://codeforces.com/problemset/problem/734/A
 * Date: 2026-08-13
 * Time: 10:17:26
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  unsigned n;
  cin >> n;
  string s;
  cin >> s;
  unsigned a = 0, d = 0;
  for (char c : s) {
    if (c == 'A')
      a++;
    else
      d++;
  }
  if (a > d)
    cout << "Anton";
  else if (a < d)
    cout << "Danik";
  else
    cout << "Friendship";
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