/*
 * Problem: A. Petya and Strings
 * URL: https://codeforces.com/problemset/problem/112/A
 * Date: 2026-08-11
 * Time: 13:25:33
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string str1, str2;
  cin >> str1 >> str2;

  int i, j;
  for (i = 0; i < str1.length(); i++)
    str1[i] = tolower(str1[i]);
  for (i = 0; i < str2.length(); i++)
    str2[i] = tolower(str2[i]);

  int c = str1.compare(str2);
  cout << c;
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