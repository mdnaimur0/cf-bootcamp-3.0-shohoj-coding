/*
 * Problem: A. Sereja and Dima
 * URL: https://codeforces.com/problemset/problem/381/A
 * Date: 2026-08-22
 * Time: 19:58:38
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  vi v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int front = 0, rear = n - 1, sereja = 0, dima = 0, turn = 0;
  while (front <= rear) {
    if (v[front] > v[rear]) {
      if (turn == 0)
        sereja += v[front];
      else
        dima += v[front];
      front++;
    } else {
      if (turn == 0)
        sereja += v[rear];
      else
        dima += v[rear];
      rear--;
    }
    turn = !turn;
  }
  cout << sereja << " " << dima;
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