#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n = 5;
  int bef;
  cin >> bef;
  rep(i, n-1) {
    int num;
    cin >> num;
    if (bef == num) {
      cout << "YES" << endl;
      return 0;
    }
    bef = num;
  }

  cout << "NO" << endl;
}
