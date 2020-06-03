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
  int n;
  ll k;
  cin >> n >> k;

  vi a(n);
  rep(i, n)
  {
    cin >> a[i];
    a[i]--;
  }

  // ループを求める
  vi arrives(n, -1);
  int now = 0;
  int num = -1;
  int repeat_num, start_pos;
  while(true) {
    num++;
    if (arrives[now] > -1) {
      // 訪れたことがある
      start_pos = now;
      repeat_num = num - arrives[now];
      break;
    }
    arrives[now] = num;
    now = a[now];
  }

  if (k < arrives[start_pos]) {
    now = 0;
    rep(i, k) {
      now = a[now];
    }
  } else {
    k = (k - arrives[start_pos]) % repeat_num;
    rep(i, k) {
      now = a[now];
    }
  }

  cout << (now + 1) << endl;
}
