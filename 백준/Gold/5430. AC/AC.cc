#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string p, s;
        int n;
        cin >> p >> n >> s;

        deque<int> dq;
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    dq.push_back(stoi(temp));
                    temp = "";
                }
            }
        }

        bool isReversed = false;
        bool isError = false;

        for (char cmd : p) {
            if (cmd == 'R') {
                isReversed = !isReversed;
            } else {
                if (dq.empty()) {
                    isError = true;
                    break;
                }
                if (isReversed) dq.pop_back();
                else dq.pop_front();
            }
        }

        if (isError) {
            cout << "error\n";
        } else {
            cout << "[";
            if (isReversed) {
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    if (!dq.empty()) cout << ",";
                }
            } else {
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    if (!dq.empty()) cout << ",";
                }
            }
            cout << "]\n";
        }
    }
    return 0;
}