/*
 * Problem: A. I Wanna Be the Guy
 * URL: https://codeforces.com/problemset/problem/469/A
 * Date: 2026-08-19
 * Time: 00:02:22
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  set<int> levels;
  int p, q, temp;
  cin >> p;
  while (p--) {
    cin >> temp;
    levels.insert(temp);
  }
  cin >> q;
  while (q--) {
    cin >> temp;
    levels.insert(temp);
  }
  cout << (levels.size() == n ? "I become the guy." : "Oh, my keyboard!");
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