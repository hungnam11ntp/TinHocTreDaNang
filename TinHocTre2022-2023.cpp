// Bài 1
#include <bits/stdc++.h>
using namespace std;
string capitalize(string word) {
    if (!word.empty()) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
    }
    return word;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string input;
    getline(cin, input);
    stringstream ss(input);
    string word;
    vector<string> result;
    while (ss >> word) {
        result.push_back(capitalize(word));
    }
    for (string w : result) {
        cout << w << " ";
    }
    return 0;
}

// Bài 2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll ans = -1e9;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x > ans) {
            ans = x;
        }
    }
    cout << ans;
    return 0;
}

// Bài 3
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ifstream fin("BOBASO.INP");
    ofstream fout("BOBASO.OUT");
    int n, m;
    fin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        fin >> arr[i];
    }
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (arr[i] == 0 || arr[j] == 0 || arr[k] == 0) {
                    count++;
                } else {
                    if ((1LL * arr[i] * arr[j] * arr[k]) % m == 0) {
                        count++;
                    }
                }
            }
        }
    }
    fout << count;
    fin.close();
    fout.close();
    return 0;
}

// Bài 4
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream fin("TIEN.INP");
    ofstream fout("TIEN.OUT");
    int m, n;
    fin >> m >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    vector<int> dp(m + 1, INT_MAX);
    dp[0] = 0;
    for (int c : a) {
        for (int i = c; i <= m; i++) {
            if (dp[i - c] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    if (dp[m] != INT_MAX) {
        fout << dp[m];
    } else {
        fout << -1;
    }
    fin.close();
    fout.close();
    return 0;
}
