#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int K,ans=0;
    stack<int> st;
    cin>>K;
    for (int i = 0; i < K; i++)
    {
        int val;
        cin>>val;
        if(val==0) {
            if(!st.empty()){
                st.pop();
            }
        }
        else st.push(val);
    }
    while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
    cout<<ans<<'\n';

    return 0;
}