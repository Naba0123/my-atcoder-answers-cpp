#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  string s, t;
  cin >> s >> t;

  string ans = "No";

  if (t.substr(0, s.length()) == s) {
    ans = "Yes";
  }

  cout << ans << endl;
}
