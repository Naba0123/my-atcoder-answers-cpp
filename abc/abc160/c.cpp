#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int K, N;
  cin >> K >> N;

  int max_, bef, first;
  rep(i, N) {
    int now;
    cin >> now;
    if (i == 0) {
      first = now;
    }
    max_ = max(max_, now - bef);
    bef = now;
  }
  max_ = max(max_, first + K - bef);

  int ans = K - max_;

  cout << ans << endl;
}
