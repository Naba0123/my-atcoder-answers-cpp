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
  ll a, b, v, w, t;
  cin >> a >> v >> b >> w >> t;

  if (a == b)
  {
    cout << "YES" << endl;
    return 0;
  }

  if (b > a)
  {
    b += w * t;
    a += v * t;
    if (a >= b)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  } else {
    b -= w * t;
    a -= v * t;
    if (a <= b) {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }


}
