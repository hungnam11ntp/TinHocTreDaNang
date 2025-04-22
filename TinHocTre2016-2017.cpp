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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll digits(ll n) {
    ll ans = 0;
    while (n > 0) {
        ll d = n % 10;
        ans += d;
        n /= 10;
    }
    return ans;
}
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream fin("TIMSO.INP");
    ofstream fout("TIMSO.OUT");
    ll n, ans = 0;
    fin >> n;
    for (ll i = 0; i <= 162; i++) {
        if (n < i) {
            break;
        }
        if (n - i + digits(n - i) == n) {
            ans = n - i;
            break;
        }
    }
    fout << ans;
    fin.close();
    fout.close();
}
