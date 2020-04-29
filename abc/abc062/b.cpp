#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> a(H);
  rep(i, H) {
    vector<char> row(W);
    rep(j, W) { cin >> row.at(j); }
    a.at(i) = row;
  }

  rep_s(i, -1, H + 1) {
    rep_s(j, -1, W + 1) {
      if (i == -1 || j == -1 || i > H - 1 || j > W - 1) {
        cout << "#";
      } else {
        cout << a.at(i).at(j);
      }
    }
    cout << endl;
  }
}
