#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> st;
    string input;
    int sum=0,mid=1;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if(input[i]=='('){
            mid*=2;
            st.push(input[i]);
        } else if(input[i]=='['){
            mid*=3;
            st.push(input[i]);
        } else if(input[i]==')'){
            if(st.empty()||st.top()!='('){
                sum=0;
                break;
            }
            if(input[i-1]=='('){
                sum+=mid;
                mid/=2;
                st.pop();
            } else {
                mid/=2;
                st.pop();
            }
        } else if(input[i]==']'){
            if(st.empty()||st.top()!='['){
                sum=0;
                break;
            }
            if(input[i-1]=='['){
                sum+=mid;
                mid/=3;
                st.pop();
            } else {
                mid/=3;
                st.pop();
            }
        } 
    }
    if(!st.empty()){
        cout<<"0\n";
    } else {
        cout<<sum<<"\n";
    }

    return 0;
}