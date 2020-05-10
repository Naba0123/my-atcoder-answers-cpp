#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N, R;
  cin >> N >> R;

  int ans = R;
  if (N < 10) {
    ans += 100 * (10 - N);
  }

  cout << ans << endl;
}
