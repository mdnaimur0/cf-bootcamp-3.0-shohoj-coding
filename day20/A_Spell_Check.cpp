/*
 * Problem: A. Spell Check
 * URL: https://codeforces.com/problemset/problem/1722/A
 * Date: 2026-08-31
 * Time: 15:46:36
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
  int n;
  string s;
  cin >> n >> s;
  sort(all(s));
  cout << (s.compare("Timru") == 0 ? "YES" : "NO") << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}