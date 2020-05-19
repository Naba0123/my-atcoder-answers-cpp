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

## 参照

```c++
// 配列aの全要素を2倍する
for (int &x : a) {
  x = x * 2;
}
```

## 素数判定

```c++
// √nまでに割れる数があるのが素数
#include <math.h>
bool isPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
```
