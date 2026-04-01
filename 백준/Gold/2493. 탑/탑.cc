#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
int N;
stack<pair<int,int>> st;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>N;
    for (int i = 0; i < N; i++){
        int height;
        cin>>height;
        while(!st.empty()){
            if(height<st.top().first){
                cout<<st.top().second<<" ";
                break;
            }
            st.pop();
        }
        if(st.empty()){
            cout<<0<<" ";
        }
        st.push(make_pair(height,i+1));
    }

    return 0;
}