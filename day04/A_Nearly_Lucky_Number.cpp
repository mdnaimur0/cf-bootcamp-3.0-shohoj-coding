/*
 * Problem: A. Nearly Lucky Number
 * URL: https://codeforces.com/problemset/problem/110/A
 * Date: 2026-08-13
 * Time: 10:10:40
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n;
  cin >> n;
  int count = 0, rem;
  while (n != 0) {
    rem = n % 10;
    if (rem == 4 || rem == 7)
      count++;
    n /= 10;
  }
  if (count == 4 || count == 7)
    cout << "YES";
  else
    cout << "NO";
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