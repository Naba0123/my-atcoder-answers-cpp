#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  ll X;
  cin >> X;

  ll ans = 0;
  ll now = 100;
  while(now < X) {
    now = now * 1.01;
    ans++;
  }

  cout << ans << endl;

}
