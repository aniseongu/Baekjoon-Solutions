#include <iostream>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    stack<pair<int,int>> st;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin>>val;
        while(!st.empty()) {
            if(val<st.top().first){
                cout<<st.top().second<<" ";
                break;
            }
            st.pop();
        }
        if(st.empty()){
            cout<<"0 ";
        }
        st.push({val,i+1});
    }
    cout<<"\n";
    


    return 0;
}