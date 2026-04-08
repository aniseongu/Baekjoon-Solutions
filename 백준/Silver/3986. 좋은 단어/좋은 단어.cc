#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ans=0;
    cin >> n;
    while (n--) {
        stack<int> st;
        string input;
        cin >> input;
        for (int i = 0; i < input.size(); i++)
        {
            if(st.empty()) st.push(input[i]);
            else {
                if(input[i]==st.top()){
                    st.pop();
                } else st.push(input[i]);
            }
        }
        if(st.empty()) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}