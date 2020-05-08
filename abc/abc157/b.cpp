#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  vector<int> a(9);
  rep(i, 3 * 3) {
    cin >> a[i];
  }

  vector<bool> is_bingo(9);

  int N;
  cin >> N;

  rep(i, N) {
    int b;
    cin >> b;
    rep(i, 3 * 3) {
      if (a[i] == b) {
        is_bingo[i] = true;
      }
    }
  }


  string ans = "No";
  rep(i, 3) {
    // 縦
    if (is_bingo[0 + i] && is_bingo[3 + i] && is_bingo[6 + i]) {
      ans = "Yes";
    }
    // 横
    if (is_bingo[3 * i] && is_bingo[3 * i + 1] && is_bingo[3 * i + 2]) {
      ans = "Yes";
    }
  }
  // 斜め
  if (is_bingo[0] && is_bingo[4] && is_bingo[8]) {
    ans = "Yes";
  }
  if (is_bingo[2] && is_bingo[4] && is_bingo[6]) {
    ans = "Yes";
  }

  cout << ans << endl;

}
