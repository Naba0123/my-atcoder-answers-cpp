#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> ans(N);
  vector<bool> is_fix(N);

  rep(i, M) {
    int keta, num;
    cin >> keta >> num;

    keta--;
    if (keta == 0 && num == 0 && N > 1) {
      cout << "-1" << endl;
      return 0;
    }
    if (!is_fix[keta]) {
      is_fix[keta] = true;
      ans[keta] = num;
    } else if (ans[keta] != num) {
      cout << "-1" << endl;
      return 0;
    }
  }

  rep(i, N) {
    if (!is_fix[i]) {
      if (i == 0) {
        if (N == 1) {
          ans[i] = 0;
        } else {
          ans[i] = 1;
        }
      } else {
        ans[i] = 0;
      }
    }
    cout << ans[i];
  }
  cout << endl;
}
