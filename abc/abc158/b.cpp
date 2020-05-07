#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  ll div = N / (A + B);
  ll ans = div * A;
  ll amari = N - div * (A + B);
  ans += min(A, amari);

  cout << ans << endl;


}
