#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i, N) { cin >> d.at(i); }
  sort(d.begin(), d.end());

  int before = d.at(0);
  int cnt = 1;
  rep_s(i, 1, N) {
    if (before != d.at(i)) {
      before = d.at(i);
      cnt++;
    }
  }

  cout << cnt << endl;
}
