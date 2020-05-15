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

  unordered_map<string, int> counts(n);

  int maxCount = 0;

  // create map
  rep(i, n) {
    string s;
    cin >> s;
    counts[s]++;
    maxCount = max(counts[s], maxCount);
  }

  // filter
  vector<string> strs;
  for(auto x : counts) {
    if (x.second == maxCount) {
      strs.push_back(x.first);
    }
  }

  sort(strs.begin(), strs.end());

  rep(i, strs.size()) {
    cout << strs[i] << endl;
  }
}
