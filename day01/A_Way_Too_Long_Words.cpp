/*
 * Problem: A. Way Too Long Words
 * URL: https://codeforces.com/problemset/problem/71/A
 * Date: 2026-08-10
 * Time: 12:29:44
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string str, str2 = "";
  cin >> str;
  if (str.length() > 10) {
    str2.push_back(str[0]);
    str2.append(to_string(str.length() - 2));
    str2.push_back(str[str.length() - 1]);
  } else
    str2 = str;
  cout << str2 << endl;
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