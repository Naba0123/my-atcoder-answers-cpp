#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> count(N);

  rep(i, K) {
    int cnt;
    cin >> cnt;
    rep(j, cnt) {
      int person;
      cin >> person;
      person--;
      count[person]++;
    }
  }

  int ans = 0;
  rep(i, N) {
    if (count[i] == 0) {
      ans++;
    }
  }

  cout << ans << endl;
}
