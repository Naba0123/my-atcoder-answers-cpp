#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[3];
    cin >> s;

    int res = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == '1') {
            res++;
        }
    }

    cout << res << endl;
}