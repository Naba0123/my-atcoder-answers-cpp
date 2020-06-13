# 累積和、imos法

https://imoz.jp/algorithms/imos_method.html

```c++
for (int i = 0; i < T; i++) table[i] = 0;
for (int i = 0; i < C; i++) {
  table[S[i]]++;  // 入店処理: カウントを 1 増やす
  table[E[i]]--;  // 出店処理: カウントを 1 減らす
}
// シミュレート
for (int i = 0; i < T; i++) {
  if (0 < i) table[i] += table[i - 1];
}
```
