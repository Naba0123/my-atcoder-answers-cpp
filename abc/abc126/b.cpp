#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = atoi(s.substr(0, 2).c_str());
    int b = atoi(s.substr(2, 2).c_str());

    if (1 <= a && a <= 12) {
        if (1 <= b && b <= 12) {
            puts("AMBIGUOUS");
        } else {
            puts("MMYY");
        }
    } else {
        if (1 <= b && b <= 12) {
            puts("YYMM");
        } else {
            puts("NA");
        }
    }

}