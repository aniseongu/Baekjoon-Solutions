#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> dp(n+1);
    for (int i = 1; i*i <= n; ++i) {
        dp[i*i]=1;
    }
    for (int i = 1; i <= n; ++i) {
        if (dp[i]==1) continue;
        dp[i]=INT_MAX;
        for (int j = 1; j*j <= i; ++j) {
            dp[i] = min(dp[i], dp[i - j*j] + 1);
        }
    }
    cout<< dp[n] << "\n";
    return 0;
}