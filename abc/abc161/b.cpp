#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);

  int total = 0;

  rep(i, n) {
    cin >> a[i];
    total += a[i];
  }

  int ans_count = 0;

  rep(i, n) {
    if (total <= a[i] * 4 * m) {
      ans_count++;
    }
  }

  if (m <= ans_count) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
