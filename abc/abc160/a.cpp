#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  string S;
  cin >> S;

  string ans = "No";
  if (S[2] == S[3] && S[4] == S[5]) {
    ans = "Yes";
  }

  cout << ans << endl;
}
