#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    int nn = 0, orig_N = N;
    while (N > 0)
    {
        nn += N % 10;
        N /= 10;
    }

    if (orig_N % nn == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
