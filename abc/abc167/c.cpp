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
  int n, m, x;
  cin >> n >> m >> x;

  vi c(n);
  vector<vi> a(n, vi(m));

  rep(i, n)
  {
    cin >> c[i];
    rep(j, m)
    {
      cin >> a[i][j];
    }
  }

  int ans = -1;
  int _to = pow(2, n);
  for (int i = 1; i < _to; i++)
  {
    int _ans = 0;
    vi skill(m);
    rep(j, n)
    {
      // 買う
      if (i & (1 << j))
      {
        _ans += c[j];
        rep(k, m)
        {
          skill[k] += a[j][k];
        }
      }
    }
    bool isSkillClear = true;
    rep(j, m)
    {
      if (skill[j] < x)
      {
        isSkillClear = false;
      }
    }
    if (!isSkillClear)
    {
      continue;
    }

    if (ans == -1 || _ans < ans)
    {
      ans = _ans;
    }
  }

  cout << ans << endl;
}
