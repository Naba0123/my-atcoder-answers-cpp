#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<string>> score(n, vector<string>(n));

  rep(i, m) {
    int win, lose;
    cin >> win >> lose;
    win--;
    lose--;
    score[win][lose] = "o";
    score[lose][win] = "x";
  }

  rep(i, n) {
    rep(j, n) {
      cout << (score[i][j] != "" ? score[i][j] : "-");
      if (j < n - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }

}
