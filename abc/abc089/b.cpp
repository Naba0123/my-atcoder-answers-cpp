#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;
    string out = "Three";
    rep(i, N)
    {
        string s;
        cin >> s;
        if (s == "Y")
        {
            out = "Four";
            break;
        }
    }

    cout << out << endl;
}
