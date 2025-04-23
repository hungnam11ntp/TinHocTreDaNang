// Bài 1
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int ans = 0;
    cin >> s;
    for (char i: s) {
        if (i == '9') {
            ans++;
        }
    }
    cout << ans;
}
