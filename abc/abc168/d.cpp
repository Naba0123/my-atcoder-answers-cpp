#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

void my_search(int pos, vector<vector<int>> &tree, vi &ans)
{
  vi news;
  rep(i, tree[pos].size())
  {
    if (ans[tree[pos][i]] == -1)
    {
      ans[tree[pos][i]] = pos;
      news.push_back(tree[pos][i]);
    }
  }
  rep(i, news.size())
  {
    my_search(news[i], tree, ans);
  }
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<int>> tree(n);

  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }

  queue<int> now;
  vi ans(n, -1);
  ans[0] = 0;
  now.push(0);
  while (!now.empty())
  {
    int _now = now.front();
    now.pop();
    rep(i, tree[_now].size())
    {
      if (ans[tree[_now][i]] == -1)
      {
        ans[tree[_now][i]] = _now;
        now.push(tree[_now][i]);
      }
    }
  }

  cout << "Yes" << endl;
  rep_s(i, 1, n)
  {
    cout << (ans[i] + 1) << endl;
  }
}
