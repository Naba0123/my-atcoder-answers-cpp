#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int X;
  cin >> X;

  int ans = 0;
  
  ans += (X / 500) * 1000;
  X = X % 500;

  ans += (X / 5) * 5;

  cout << ans << endl;
}
