#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main()
{
  ll n, m, k;
  cin >> n >> m >> k;

  vi a, b;
  rep(i, n)
  {
    ll _a;
    cin >> _a;
    a.push_back(_a);
  }

  rep(i, m)
  {
    ll _b;
    cin >> _b;
    b.push_back(_b);
  }

  ll a_k = 0;
  int a_index = -1;

  ll b_k = 0;
  int b_index = -1;

  // b読める分だけ読む
  while(b_index + 1 < m && b_k + b[b_index + 1] <= k) {
    b_index++;
    b_k += b[b_index];
  }

  // 答えを定義
  int ans = b_index + 1;

  while(a_index + 1 < a.size())
  {
    // 次のaを読む
    a_index++;
    a_k += a[a_index];

    // bを減らす
    while (a_k + b_k > k && b_index >= 0)
    {
      b_k -= b[b_index];
      b_index--;
    }

    if (a_k + b_k > k) {
      break;
    }
    ans = max(ans, a_index + b_index + 2);
  }

  cout << ans << endl;
}
