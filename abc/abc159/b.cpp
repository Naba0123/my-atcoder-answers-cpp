#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

bool kaibun(string S) {
  int n = S.length();
  rep(i, n/2) {
    if (S[i] != S[n-i-1]) {
      return false;
    }
  }
  return true;
}

int main() {
  string S;
  cin >> S;
  int n = S.length();

  string ans = "Yes";
  if (!kaibun(S)) {
    ans = "No";
  } else if (!kaibun(S.substr(0, (n-1)/2))) {
    ans = "No";
  } else if (!kaibun(S.substr((n+3)/2-1))) {
    ans = "No";
  }

  cout << ans << endl;

}
