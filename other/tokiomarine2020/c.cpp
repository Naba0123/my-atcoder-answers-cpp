#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main()
{
  int n, k;
  cin >> n >> k;

  vi a(n);

  rep(i, n)
  {
    cin >> a[i];
  }

  rep(_k, k)
  {
    vi table(n + 1, 0);
    rep(i, n)
    {
      table[max(i - a[i], 0)]++;
      table[min(i + a[i] + 1, n)]--;
    }
    rep(i, n)
    {
      if (i > 0)
      {
        table[i] += table[i - 1];
      }
    }

    table.pop_back();
    if (table == a)
    {
      break;
    }

    a = table;
  }

  rep(i, n)
  {
    cout << a[i] << endl;
  }
}
