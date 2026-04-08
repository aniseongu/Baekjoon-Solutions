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
string ps;
int sum;
int mid=1;
stack<char> st;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    getline(cin,ps);
    for (int i = 0; i < ps.length(); i++){
        if(ps[i]=='('){
            mid*=2;
            st.push(ps[i]);
        } else if (ps[i]=='[') {
            mid*=3;
            st.push(ps[i]);
        } else if (ps[i]==')') {
            if(st.empty()||st.top()!='('){
                sum=0;
                break;
            }
            if(ps[i-1]=='('){
                sum+=mid;
                mid/=2;
                st.pop();
            } else {
                mid/=2;
                st.pop();
            }
        } else if (ps[i]==']') {
            if(st.empty()||st.top()!='['){
                sum=0;
                break;
            }
            if(ps[i-1]=='['){
                sum+=mid;
                mid/=3;
                st.pop();
            } else {
                mid/=3;
                st.pop();
            }
        }
    }
    if(!st.empty()) sum=0;
    cout<<sum<<endl;
    
    return 0;
}