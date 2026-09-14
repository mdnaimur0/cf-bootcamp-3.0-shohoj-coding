/*
 * Problem: A. Dubstep
 * URL: https://codeforces.com/problemset/problem/208/A
 * Date: 2026-09-13
 * Time: 22:30:25
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
  size_t pos;
  while ((pos = s.find("WUB")) != string::npos) s.replace(pos, 3, " ");
  bool x, y;
  for (char c : s) {
    if (c == ' ' && x) {
      y = true;
    } else {
      if (y && x) {
        cout << " ";
        y = false;
      }
      x = true;
      cout << c;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}