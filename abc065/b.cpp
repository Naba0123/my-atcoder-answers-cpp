#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) {
    cin >> a.at(i);
    a.at(i)--;
  }

  int count = 0;
  int nowIndex = 0;
  while (1) {
    if (count > N) {
      cout << "-1" << endl;
      break;
    }
    if (nowIndex == 1) {
      cout << count << endl;
      break;
    }

    count++;
    nowIndex = a.at(nowIndex);
  }
}
