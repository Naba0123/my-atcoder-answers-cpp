#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  int h, n;
  cin >> h >> n;
  int attack = 0;
  rep(i, n) {
    int a;
    cin >> a;
    attack += a;
  }

  if (attack >= h) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
