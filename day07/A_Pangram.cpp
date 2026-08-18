/*
 * Problem: A. Pangram
 * URL: https://codeforces.com/problemset/problem/520/A
 * Date: 2026-08-18
 * Time: 23:54:31
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<char> st;
  for (char ch : s)
    st.insert(tolower(ch));
  cout << (st.size() == 26 ? "YES" : "NO");
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