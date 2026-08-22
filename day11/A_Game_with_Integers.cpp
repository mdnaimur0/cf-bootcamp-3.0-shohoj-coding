/*
 * Problem: A. Game with Integers
 * URL: https://codeforces.com/problemset/problem/1899/A
 * Date: 2026-08-22
 * Time: 19:07:09
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;

  int moves = 1, turn = 0;
  while (moves < 10) {
    if (turn == 0) {
      if (n % 3 == 1)
        n--;
      else
        n++;
    } else {
      if (n % 3 == 1)
        n++;
      else
        n--;
    }
    if (turn == 0 && n % 3 == 0) {
      cout << "First\n";
      break;
    }
    turn = 1;
    moves++;
  }
  if (turn == 1)
    cout << "Second\n";
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