#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n, k;
  cin >> n >> k;

  vi p(n);
  rep(i, n) {
    cin >> p[i];
  }

  // 期待値計算
  vector<int> kitai(n);
  rep(i, n) {
    kitai[i] = p[i] + 1;
  }

  // 初期値
  int ans = 0;
  rep(i, k) {
    ans += kitai[i];
  }

  int tmp = ans;
  rep_s(i, 1, n-k+1) {
    tmp -= kitai[i - 1];
    tmp += kitai[i + k - 1];
    ans = max(tmp, ans);
  }

  double res = ans;
  res /= 2;

  printf("%.10f\n", res);
}
