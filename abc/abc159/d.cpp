#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

ll choose2(ll n) {
  return n*(n-1)/2;
}

int main() {
  int N;
  cin >> N;

  // 入力
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
    A[i]--;
  }

  // 分布
  vector<int> cnt(N);
  rep(i, N) {
    cnt[A[i]]++;
  }

  // 消さないときの答え
  ll total = 0;
  rep(i, N) {
    total += choose2(cnt[i]);
  }

  // 答えを計算して出力
  rep(i, N) {
    ll minus = choose2(cnt[A[i]]);
    ll plus = choose2(cnt[A[i]] - 1);
    ll ans = total - minus + plus;
    cout << ans << endl;
  }

}
