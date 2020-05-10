#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 1;
  N /= K;

  while(N > 0) {
    N /= K;
    ans++;
  }

  cout << ans << endl;
}
