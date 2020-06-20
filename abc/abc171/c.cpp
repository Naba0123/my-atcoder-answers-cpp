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
  ll n;
  cin >> n;

  string ans = "";
  while(n > 0) {
    int x = (n - 1) % 26;
    ans += 'a' + x;
    n = (n - 1) / 26;
  }

  rep(i, ans.length()) {
    cout << ans[ans.length() - i - 1];
  }

}
