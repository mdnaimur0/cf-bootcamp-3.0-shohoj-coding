/*
 * Problem: B. Chemistry
 * URL: https://codeforces.com/problemset/problem/1883/B
 * Date: 2026-09-16
 * Time: 00:57:55
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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<char, int> mp;
  for (char c : s) mp[c]++;
  int odd = 0, even = 0;
  for (pair p : mp) {
    if (p.second % 2) odd++;
    else even++;
  }
  int del = odd > 0 ? (odd - (n - k) % 2) : (n - k) % 2;
  cout << (del <= k && k % 2 == del % 2 ? "YES" : "NO") << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}