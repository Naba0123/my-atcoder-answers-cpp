#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  rep_s(i, 1, N + 1) {
    if (i % 3 == 0 || i % 5 == 0) {
      continue;
    }
    ans += i;
  }

  cout << ans << endl;

}
