#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<long long> sword(n), need(n);

        for (int i = 0; i < n; i++) cin >> sword[i];
        for (int i = 0; i < n; i++) cin >> need[i];

        sort(sword.begin(), sword.end());

        long long ans = 0, spare = 0, lvl = 0;

        for (int i = n - 1; i >= 0; i--) {
            spare++;
            while (lvl < n && spare >= need[lvl]) {
                spare -= need[lvl];
                lvl++;
            }
            ans = max(ans, sword[i] * lvl);
        }

        cout << ans << "\n";
    }

    return 0;
}