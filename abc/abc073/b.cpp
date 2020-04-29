#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    int res = 0;
    rep(i, N)
    {
        int s, e;
        cin >> s >> e;
        res += e - s + 1;
    }

    cout << res << endl;
}
