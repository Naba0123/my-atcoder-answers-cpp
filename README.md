# my-atcoder-answers-cpp

# チートシート

## 範囲 for 文

```c++
// 配列
vector<int> a = {1, 3, 2, 5};
for (int x : a) {
  cout << x << endl;
}
// 文字列（コンテナ）
string str = "hello";
for (char c : str) {
  cout << c;
}
cout << endl;
```

## 多次元配列

```c++
// 基本形（縦n、横m）
vector<vector<int>> data(n, vector<int>(m));
// 初期値
vector<vector<int>> data_init = {
  {7, 4, 0, 8},
  {2, 0, 3, 5},
  {6, 1, 7, 0},
};
// N×0配列（縦の要素数はn、横は未定）
vector<vector<int>> data(3);  // 初期状態ではサイズは0
data.at(0).push_back(1); data.at(0).push_back(2);
data.at(1).push_back(1);
data.at(2).push_back(1); data.at(2).push_back(2); data.at(2).push_back(1);
// ↑要素数が縦によって異なる

```

- 縦の大きさ：data.size()
- 横の大きさ：data.at(i).size()
- 初期値：int 0, string ""

## map

```c++
map<string, int> primes;

for (auto itr = primes.begin(); itr != primes.end(); itr++) {
  itr->first;  // string
  itr->second;  // int
}
```


## 参照

```c++
// 配列aの全要素を2倍する
for (int &x : a) {
  x = x * 2;
}
```

## 円周率

```c++
#include <bits/stdc++.h>
M_PI
// または
acos(-1)
```

## 幅優先探索（BFS）
```C++
vector<vi> tree(n, vi); // 初期化などはされているとする
queue<int> now;  // 先頭をキューに追加
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
```
