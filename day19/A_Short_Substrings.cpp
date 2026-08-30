/*
 * Problem: A. Short Substrings
 * URL: https://codeforces.com/problemset/problem/1367/A
 * Date: 2026-08-31
 * Time: 01:52:56
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
  string a, b;
  cin >> b;
  for (int i = 0; i < b.length(); i += 2) a.push_back(b[i]);
  a.push_back(b.back());
  cout << a << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}