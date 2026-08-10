/*
 * Problem: A. Bit++
 * URL: https://codeforces.com/problemset/problem/282/A
 * Date: 2026-08-10
 * Time: 12:53:36
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  string s;
  int x = 0;
  while (n--) {
    cin >> s;
    char ch = s[0];
    char lch = s[s.length() - 1];
    if (ch == '+' || lch == '+') {
      x++;
    } else if (ch == '-' || lch == '-')
      x--;
  }
  cout << x;

  return 0;
}