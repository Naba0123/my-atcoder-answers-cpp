#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n;
  cin >> n;

  unordered_map<int, bool> a_count;

  rep(i, n) {
    int a;
    cin >> a;
    if (a_count[a]) {
      cout << "NO" << endl;
      return 0;
    }
    a_count[a] = true;
  }

  cout << "YES" << endl;

}
