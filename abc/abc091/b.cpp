#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N, M;
  map<string, int> mp;

  cin >> N;
  rep(i, N) {
    string s;
    cin >> s;
    mp[s]++;
  }
  cin >> M;
  rep(i, M) {
    string s;
    cin >> s;
    mp[s]--;
  }

  string res_s;
  int res_num = 0;
  for (auto itr = mp.begin(); itr != mp.end(); itr++) {
    if (itr->second > res_num) {
      res_s = itr->first;
      res_num = itr->second;
    }
  }

  cout << res_num << endl;
}
