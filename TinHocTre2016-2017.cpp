// Bài 1
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string n, ans = "";
    cin >> n;
    for (int i = 0; i < n.size(); i++) {
        if (i % 2 == 0) {
            ans += n[i];
        }
    }
    cout << ans;
}

// Bài 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream fin("GHEPSO.INP");
    ofstream fout("GHEPSO.OUT");
    int n;
    fin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        ans = ans * 10 + a[i];
    }
    fout << ans;
    fin.close();
    fout.close();
}

// Bài 3
