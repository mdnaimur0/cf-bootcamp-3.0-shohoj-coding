/*
 * Problem: A. Anton and Letters
 * URL: https://codeforces.com/problemset/problem/443/A
 * Date: 2026-08-19
 * Time: 00:42:06
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  getline(cin, s);
  set<char> chars;
  for (char ch : s) {
    if (ch >= 'a' && ch <= 'z')
      chars.insert(ch);
  }
  cout << chars.size();
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