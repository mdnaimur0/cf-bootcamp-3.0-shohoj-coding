/*
 * Problem: A. Amusing Joke
 * URL: https://codeforces.com/problemset/problem/141/A
 * Date: 2026-08-20
 * Time: 15:15:49
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string g, h, p;
  cin >> g >> h >> p;
  g = g + h;
  sort(g.begin(), g.end());
  sort(p.begin(), p.end());
  if (g.compare(p))
    cout << "NO";
  else
    cout << "YES";
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