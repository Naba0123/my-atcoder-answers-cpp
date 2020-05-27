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
  int n, m;
  cin >> n >> m;

  int ac = 0, wa = 0;
  vector<bool> is_ac(n);
  vi wa_count(n);

  rep(i, m)
  {
    int p;
    string s;
    cin >> p >> s;
    p--;
    if (s == "AC")
    {
      // 初めてAC
      if (!is_ac[p])
      {
        is_ac[p] = true;
        ac++;
      }
    } else {
      if (!is_ac[p])
      {
        wa_count[p]++;
      }
    }
  }

  rep(i, n) {
    if (is_ac[i]) {
      wa += wa_count[i];
    }
  }

  cout << ac << " " << wa << endl;
}
