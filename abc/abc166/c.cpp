#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> height(N);
  rep(i, N) {
    cin >> height[i];
  }

  vector<bool> heighest(N);
  rep(i, N) {
    heighest[i] = true;
  }

  rep(i, M) {
    int b, a;
    cin >> b >> a;
    b--;
    a--;
    if (height[b] <= height[a]) {
      heighest[b] = false;
    }
    if (height[a] <= height[b]) {
      heighest[a] = false;
    }
  }

  int ans = 0;
  rep(i, N) {
    if (heighest[i] == true) {
      ans++;
    }
  }

  cout << ans << endl;

}
