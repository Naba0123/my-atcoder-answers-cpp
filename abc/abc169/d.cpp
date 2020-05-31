#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main()
{
  ll n;
  cin >> n;

  map<ll, ll> primes;

  double sqrtNum = sqrt(n);
  // 素因数分解
  for (int i = 2; i <= sqrtNum; i += 1) {
    while(n % i == 0) {
      primes[i]++;
      n /= i;
    }
  }
  if (n > 1) {
    primes[n]++;
  }

  ll ans = 0;
  for (auto itr = primes.begin(); itr != primes.end(); itr++) {
    for (int i = 1; itr->second >= i; i++) {
      ans++;
      itr->second -= i;
    }
  }

  cout << ans << endl;
}
