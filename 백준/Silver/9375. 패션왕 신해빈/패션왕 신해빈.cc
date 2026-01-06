#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase,n,ans=1;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        ans=1;
        map<string,int> mp2;
        string a,b;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>a>>b;
            mp2[b]++;
        }
        for (auto v: mp2){
            ans*=mp2[v.first]+1;
        }
        cout<<ans-1<<"\n";
    }

    return 0;
}