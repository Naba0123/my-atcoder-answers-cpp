#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

bool is_reach_goal(int n_h, int n_w, int h, int w, vector<vector<char>> &c) {
  // ゴール判定
  if (c[n_h][n_w] == 'g') {
    return true;
  }

  // 自身のマスを埋める
  c[n_h][n_w] = '#';

  // 上
  if (n_h - 1 >= 0 && c[n_h - 1][n_w] != '#') {
    if (is_reach_goal(n_h - 1, n_w, h, w, c)) {
      return true;
    }
  }
  // 左
  if (n_w - 1 >= 0 && c[n_h][n_w - 1] != '#') {
    if (is_reach_goal(n_h, n_w - 1, h, w, c)) {
      return true;
    }
  }
  // 下
  if (n_h + 1 <= h && c[n_h + 1][n_w] != '#') {
    if (is_reach_goal(n_h + 1, n_w, h, w, c)) {
      return true;
    }
  }
  // 右
  if (n_w + 1 <= w && c[n_h][n_w + 1] != '#') {
    if (is_reach_goal(n_h, n_w + 1, h, w, c)) {
      return true;
    }
  }

  // 全方向行けない
  return false;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));

  int s_h, s_w;

  rep(_h, h) {
    rep(_w, w) {
      cin >> c[_h][_w];
      if (c[_h][_w] == 's') {
        s_h = _h;
        s_w = _w;
      }
    }
  }

  string ans = is_reach_goal(s_h, s_w, h-1, w-1, c) ? "Yes" : "No";

  cout << ans << endl;
}
